
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    if len(b) > len(a):
        return False
    else:
        if len(a) == len(b):
            return is_rotation(a, b)
        else:
            return is_rotation(a, b) or is_rotation(a, b[1:]) or is_rotation(a, b[:-1])


def is_rotation(a, b):
    return b in a
    """
