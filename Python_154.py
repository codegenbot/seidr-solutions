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
    if len(a) != len(b):  # if words have different length return False
        return False
    else:  # if words have same length for every letter in word change word if word is a substring return True if not return False
        for i in range(len(b)):
            b = b[1:] + b[0]
            if b in a:
                return True
        return False


if __name__ == "__main__":
    def check(fn):
        assert fn("abcd", "abd") == False, "test #1"
        assert fn("hello", "ell") == False, "test #2"
        assert fn("whassup", "psus") == False, "test #3"
        assert fn("abab", "baa") == True, "test #4"
        assert fn("efef", "eeff") == False, "test #5"
        assert fn("winemtt", "tinem") == True, "test #6"
        print("TESTS PASSED")

    check(cycpattern_check)
