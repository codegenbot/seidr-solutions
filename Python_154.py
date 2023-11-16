
def cycpattern_check(a, b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word:
    cycpattern_check("abcd","abd") => False,
    cycpattern_check("hello","ell") => True,
    cycpattern_check("whassup","psus") => False,
    cycpattern_check("abab","baa") => True,
    cycpattern_check("efef","eeff") => False,
    cycpattern_check("himenss","simen") => True,
    cycpattern_check("winemtt", "tinem") => True

    for i in range(len(a)):
        if a[i:i+len(b)] == b:
            return True
    return False



def check(fn):
    assert fn("abcd", "abd") == False, "test #1"
    assert fn("hello", "ell") == True, "test #2"
    assert fn("whassup", "psus") == False, "test #3"
    assert fn("abab", "baa") == True, "test #4"
    assert fn("efef", "eeff") == False, "test #5"
    assert fn("himenss", "simen") == True, "test #6"
    assert fn("winemtt", "tinem") == True, "test #7"
    print("TESTS PASSED")

check(cycpattern_check)
