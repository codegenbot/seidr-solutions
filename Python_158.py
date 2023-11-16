from collections import Counter


def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    c = Counter()
    for word in words:
        c[word] = len(set(word))
    c = {k: v for k, v in sorted(c.items(), key=lambda item: item[1], reverse=True)}
    first_key = next(iter(c))
    return first_key


if __name__ == '__main__':
    print(find_max(["play", "play", "play"]))
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
