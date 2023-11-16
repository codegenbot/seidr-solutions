
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"

    max_count = 0
    max_word = ""
    for word in words:
        count = len(set(word))
        if count > max_count:
            max_count = count
            max_word = word
        elif count == max_count:
            max_word = min(word, max_word)
    return max_word


def check(func):
    assert func(["play", "play", "play"]) == "play", "t10"
    assert func(["name", "of", "string"]) == "string", "t11"
    assert func(["name", "enam", "game"]) == "enam", "t12"
    assert func(["aaaaaaa", "bb", "cc"]) == "aaaaaaa", "t13"
    assert func(["aaaaaaa", "bb", "cc", "dd", "ee", "ff", "gg", "hh"]) == "aaaaaaa", "t14"
    assert func(["aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh"]) == "aa", "t15"
    assert func(["aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp"]) == "aa", "t16"
    assert func(["aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz"]) == "aa", "t17"
    assert func(["aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz"]) == "aa", "t18"
    assert func(["aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz", "aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj", "kk", "ll", "mm", "nn", "oo", "pp", "qq", "rr", "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz"]) == "aa", "t19"
    assert func(["name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game", "name", "enam", "game"]) == "enam", "t20"


if __name__ == '__main__':
    check(find_max)
    pass
    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
    """
