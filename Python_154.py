
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    if b in a:
        return True
    if b[::-1] in a:
        return True
    if b in a[::-1]:
        return True
    return False


print(cycpattern_check('himenss','simen'))

def check(cycpattern_check):
    assert cycpattern_check("abcd","abd") == False, "test #1"
    assert cycpattern_check("hello","ell") == True, "test #2"
    assert cycpattern_check("whassup","psus") == False, "test #3"
    assert cycpattern_check("abab","baa") == True, "test #4"
    assert cycpattern_check("winemtt", "tinem") == True, "test #5"
    assert cycpattern_check("efef","eeff") == False, "test #6"
    assert cycpattern_check("himenss","simen") == True

if __name__ == "__main__":
    check(cycpattern_check)
    """
