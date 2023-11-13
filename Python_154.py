
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word.
    A rotation of a string is defined as shifting the characters of the string to the right by one or more positions.
    For example, "abcd" can be rotated to "cdab" or "dabc".
    If a string is rotated to itself, it is not considered a rotation.

    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True


    # initialize the two strings
    a = "abcd"
    b = "abd"

    # check the length of the strings
    if len(a) == len(b):
        # check if the second word or any of its rotations is a substring in the first word
        if b in a:
            return True
        else:
            return False
    else:
        return False

print(cycpattern_check(a, b))
    """
