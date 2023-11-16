
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    for i in range(len(words)):
        if len(words[i]) == len(set(words[i])):
            return words[i]


def check(fn):
    assert fn(["play", "play", "play"]) == "play", "t10"
    assert fn(["name", "of", "string"]) == "string", "t11"
    assert fn(["name", "enam", "game"]) == "enam", "t12"
    assert fn(["aaaaaaa", "bb", "cc"]) == "aaaaaaa", "t13"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff"]) == "aaaaaaa", "t14"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg"]) == "aaaaaaa", "t15"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh"]) == "aaaaaaa", "t16"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii"]) == "aaaaaaa", "t17"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj"]) == "aaaaaaa", "t18"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk"]) == "aaaaaaa", "t19"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll"]) == "aaaaaaa", "t20"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm"]) == "aaaaaaa", "t21"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn"]) == "aaaaaaa", "t22"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo"]) == "aaaaaaa", "t23"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp"]) == "aaaaaaa", "t24"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq"]) == "aaaaaaa", "t25"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr"]) == "aaaaaaa", "t26"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss"]) == "aaaaaaa", "t27"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt"]) == "aaaaaaa", "t28"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu"]) == "aaaaaaa", "t29"
    assert fn(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv"]) == "aaaaaaa", "t30"
    print("All tests passed")



check(find_max)
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
