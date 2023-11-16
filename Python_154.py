from itertools import cycle

def cycpattern_check(word1 , word2):
    for i in range(len(word2)):
        word2 = word2[1:] + word2[0]
        if word2 in word1:
            return True
    return False




    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word.
    cycpattern_check("abcd","abd") => False.
    cycpattern_check("hello","ell") => True.
    cycpattern_check("whassup","psus") => False.
    cycpattern_check("abab","baa") => True.
    cycpattern_check("efef","eeff") => False.
    cycpattern_check("himenss","simen") => True.
    cycpattern_check("winemtt","tinem") => True.
"""
    # your code here


if __name__ == "__main__":
    print(cycpattern_check("abcd","abd"))
    print(cycpattern_check("hello","ell"))
    print(cycpattern_check("whassup","psus"))
    print(cycpattern_check("abab","baa"))
    print(cycpattern_check("efef","eeff"))
    print(cycpattern_check("himenss","simen"))
    print(cycpattern_check("winemtt","tinem"))
