def cycpattern_check(a , b):
    """
    You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("winemtt","tinem") => True


    """
    if len(a) != len(b):  # if words have different length
        return False  # return false
    else:  # if words have same length
        for i in range(len(b)):  # for every letter in word
            b = b[1:] + b[0]  # change word
            if b in a:  # if word is a substring
                return True  # return True

cycpattern_check(cycpattern_check)
