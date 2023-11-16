

def cycpattern_check(a, b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    for i in range(len(b)):
        b = b[1:] + b[0]
        if b in a:
            return True
    return False


def check(func):
    assert func("abcd","abd") == False, "test #1"
    assert func("hello","ell") == True, "test #2"
    assert func("whassup","psus") == False, "test #3"
    assert func("abab","baa") == True, "test #4"
    assert func("winemtt", "tinem") == True, "test #5"
    assert func("efef","eeff") == False, "test #6"
    assert func("himenss","simen") == True, "test #7"

check(cycpattern_check)
    """
