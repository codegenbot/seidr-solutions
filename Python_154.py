
def cycpattern_check(word1 , word2):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    # your code here
    if len(word1) < len(word2):
        return False

    if word1.find(word2) == -1:
        return False

    return True


if __name__ == "__main__":
    print(cycpattern_check("abcd","abd"))
    print(cycpattern_check("hello","ell"))
    print(cycpattern_check("whassup","psus"))
    print(cycpattern_check("abab","baa"))
    print(cycpattern_check("efef","eeff"))
    print(cycpattern_check("himenss","simen"))
    """
