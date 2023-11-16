def cycpattern_check(a, b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => True
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => True
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => True
    cycpattern_check("himenss","simen") => True
    cycpattern_check("himenss","simen") => True
    """
    if len(a) < len(b):
        return False

    b = b * 2
    if b.find(a) != -1:
        return True
    else:
        return False

    """
