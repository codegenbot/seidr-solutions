import itertools
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    # write your code here
    return False
    a = list(a)
    b = list(b)
    for i in range(len(b)):
        b.insert(0, b[-1])
        b.pop()
        if b == a:
            return True
    return False


print(cycpattern_check("winemtt", "tinem"))
    """
