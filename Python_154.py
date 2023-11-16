
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    def rotate_word(word):
        if len(word) < 2:
            return word
        return word[1:] + word[0]

    if len(a) < len(b):
        return False
    if b in a:
        return True
    else:
        for i in range(len(b)):
            b = rotate_word(b)
            if b in a:
                return True
        return False


print(cycpattern_check("himenss","simen"))
    """
