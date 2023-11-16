
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    max_unique_char = 0
    max_unique_char_word = ""
    for word in words:
        unique_characters = set(word)
        if len(unique_characters) > max_unique_char:
            max_unique_char = len(unique_characters)
            max_unique_char_word = word
    return max_unique_char_word


def check(fn):
    assert fn(["play", "play", "play"]) == "play", "t10"
    assert fn(["aaa", "bbb", "ccc"]) == "aaa", "t11"
    assert fn(["name", "of", "string"]) == "string", "t12"
    assert fn(["name", "enam", "game"]) == "enam", "t13"
    assert fn(["aaaaaaa", "bb", "cc"]) == "aaaaaaa", "t14"
    assert fn(["cc", "bb", "aaaaaaa"]) == "aaaaaaa", "t15"
    assert fn(["cc", "bb", "aaaaaaa", "cc"]) == "aaaaaaa", "t16"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb"]) == "aaaaaaa", "t17"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa"]) == "aaaaaaa", "t18"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc"]) == "aaaaaaa", "t19"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb"]) == "aaaaaaa", "t20"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa"]) == "aaaaaaa", "t21"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc"]) == "aaaaaaa", "t22"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb"]) == "aaaaaaa", "t23"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa"]) == "aaaaaaa", "t24"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc"]) == "aaaaaaa", "t25"
    assert fn(["cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb", "aaaaaaa", "cc", "bb"]) == "aaaaaaa", "t26"


if __name__ == "__main__":
    check(find_max)
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
