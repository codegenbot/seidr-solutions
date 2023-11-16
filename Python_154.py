
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    def collide(s1, s2):
        if len(s1) != len(s2):
            return False
        if s1 == s2:
            return True
        for i in range(len(s1)):
            if s1[i] != s2[i]:
                return False
        return True

    def is_substring(big, small):
        if len(big) < len(small):
            return False
        if collide(big[:len(small)], small):
            return True
        return is_substring(big[1:], small)

    def rotate(s):
        return s[1:] + s[0]

    def is_rotation(large, small):
        if len(large) < len(small):
            return False
        if collide(large, small):
            return True
        return is_rotation(rotate(large), small)
    """
