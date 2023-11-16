
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    if len(words) == 1:
        return words[0]
    max_word = words[0]
    max_word_len = len(set(max_word))
    for i in range(1, len(words)):
        cur_word = words[i]
        cur_word_len = len(set(cur_word))
        if cur_word_len > max_word_len:
            max_word = cur_word
            max_word_len = cur_word_len
        elif cur_word_len == max_word_len and cur_word < max_word:
            max_word = cur_word
    return max_word


if __name__ == "__main__":
    assert find_max(["name", "of", "string"]) == "string", "t1"
    assert find_max(["name", "enam", "game"]) == "enam", "t2"
    assert find_max(["aaaaaaa", "bb", "cc"]) == "aaaaaaa", "t3"
    assert find_max(["name", "of", "string", "string"]) == "string", "t4"
    assert find_max(["name", "of", "string", "name"]) == "string", "t5"
    assert find_max(["aaaaaaa", "bb", "cc", "cc"]) == "aaaaaaa", "t6"
    assert find_max(["aaaaaaa", "bb", "cc", "bb"]) == "aaaaaaa", "t7"
    assert find_max(["aaaaaaa", "bb", "cc", "aa"]) == "aaaaaaa", "t8"
    assert find_max(["name", "name", "name"]) == "name", "t9"
    assert find_max(["play", "play", "play"]) == "play", "t10"
    assert find_max(["play", "play", "play", "play"]) == "play", "t11"
    assert find_max(["play", "play", "play", "play", "play", "play", "play", "play", "play", "play"]) == "play", "t12"
    assert find_max(["play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play", "play
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
