
def cycpattern_check(a, b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring
    in the first word
    cycpattern_check("abcd","abd") => False because "abd" is not a substring of "abcd"
    cycpattern_check("hello","ell") => True because "ell" is a substring of "hello"
    cycpattern_check("whassup","psus") => False because "psus" is not a substring of "whassup"
    cycpattern_check("abab","baa") => True because "baa" is a substring of "abab"
    cycpattern_check("efef","eeff") => False because "eeff" is not a substring of "efef"
    cycpattern_check("himenss","simen") => True because "simen" is a substring of "himenss"

    """
