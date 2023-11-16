
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    max_len = 0
    res = words[0]
    for i in words:
        if len(set(i)) > max_len:
            max_len = len(set(i))
            res = i
    return res


def check(function):
    assert function(["name", "of", "string"]) == "string", "t1"
    assert function(["name", "enam", "game"]) == "enam", "t2"
    assert function(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa", "t3"
    assert function(["play", "play", "play"]) == "play", "t10"
    print("OK")


check(find_max)
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
