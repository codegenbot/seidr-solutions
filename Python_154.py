
"""
Task 1:

You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

"""


"""
Task 2:

You are given a string and also you are given a list of words that you need to check within the same string.


    check_substring("How are you?",["are", "Hello", "How"]) => ["are", "How"]
    check_substring("How are you?",["How", "are", "you", "fine"]) => ["are", "How", "you"]
"""

def cycpattern_check(a , b):
    """
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    """
