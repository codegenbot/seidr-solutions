from collections import Counter


def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    # Complete the following code given the task description and function signature.
    max_unique_characters = 0
    max_word = ""
    for word in words:
        unique_characters = len(set(word))
        if unique_characters > max_unique_characters:
            max_unique_characters = unique_characters
            max_word = word
        elif unique_characters == max_unique_characters:
            if word < max_word:
                max_word = word
    return max_word


def check(function):
    assert function(["play", "play", "play"]) == "play", "t10"
    assert function(["aaa", "bbb", "ccc"]) == "aaa", "t11"
    assert function(["aaa", "bbb", "ccc", "aaa"]) == "aaa", "t12"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb"]) == "aaa", "t13"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc"]) == "aaa", "t14"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa"]) == "aaa", "t15"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb"]) == "aaa", "t16"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc"]) == "aaa", "t17"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa"]) == "aaa", "t18"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb"]) == "aaa", "t19"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc"]) == "aaa", "t20"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa"]) == "aaa", "t21"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb"]) == "aaa", "t22"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc"]) == "aaa", "t23"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa"]) == "aaa", "t24"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb"]) == "aaa", "t25"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc"]) == "aaa", "t26"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa"]) == "aaa", "t27"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb"]) == "aaa", "t28"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc"]) == "aaa", "t29"
    assert function(["aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa", "bbb", "ccc", "aaa"]) == "aaa", "t30"


check(find_max)
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa", "t31"
    """
