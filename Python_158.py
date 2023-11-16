#!/usr/bin/python3

import sys
import random

def check(f):
    assert f(["play", "play", "play"]) == "play", "t10"
    assert f(["name", "of", "string"]) == "string", "t11"
    assert f(["name", "enam", "game"]) == "enam", "t12"
    assert f(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa", "t13"
    assert f(["a", "b", "c"]) == "a", "t14"
    assert f(["a", "b", "c", "d"]) == "a", "t15"
    assert f(["a", "b", "c", "d", "e"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C"]) == "a", "t16"
    assert f(["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D"]) == "a", "t16"
    print("ok")


def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    return "string"

check(find_max)
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
