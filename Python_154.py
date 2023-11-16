
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring
    in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    if b[0] in a:
        b = b[1:]
        if (len(b) == 1 and b[0] in a) or (len(b) >= 2 and cycpattern_check(a, b)):
            return True
        else:
            return False
    else:
        return False


def main():
    print(cycpattern_check("hello", "ell"))


if __name__ == "__main__":
    main()
    """
