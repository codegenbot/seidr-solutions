
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    if a in b:
        return True
    else:
        return False
    for i in range(len(b)):
        if b[i] in a:
            return True
        else:
            return False


def check(f):
    assert f("abcd", "abd") == False, "test #1"
    assert f("hello", "ell") == True, "test #2"
    assert f("whassup", "psus") == False, "test #3"
    assert f("abab", "baa") == True, "test #4"
    assert f("winemtt", "tinem") == True, "test #5"
    print("Success!")


check(cycpattern_check)
    """
