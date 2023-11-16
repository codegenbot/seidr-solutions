
def cycpattern_check(a , b):
    """
    You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("winemtt","tinem") => False

    """
    return b in a

    

def check(func):
    assert func("abcd", "abd") == False, "test #1"
    assert func("hello", "ell") == True, "test #2"
    assert func("whassup", "psus") == False, "test #3"
    assert func("abab", "baa") == False, "test #4"
    assert func("efef", "eeff") == False, "test #5"
    assert func("winemtt", "tinem") == True, "test #6"


if __name__ == "__main__":
    check(cycpattern_check)
