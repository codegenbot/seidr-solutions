def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_string = False


class SuffixTrie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, s):
        node = self.root
        for char in s:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_end_of_string = True

    def query(self, s):
        node = self.root
        for char in s:
            if char not in node.children:
                return []
            node = node.children[char]
        result = []
        self._query(node, "", result)
        return result

    def _query(self, node, prefix, result):
        if node.is_end_of_string:
            result.append(len(prefix))
        for char in node.children:
            self._query(node.children[char], prefix + char, result)


def indices_of_substring(text, target):
    suffix_tire = SuffixTrie()
    suffix_tire.insert(
        text + "$" * len(target)
    )  # Add a unique character at the end of each substring
    return suffix_tire.query(target + "$")


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))