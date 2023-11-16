
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    
    b = (b*2)
    
    return is_ValidSubstring(a, b)

def is_ValidSubstring(a , b):
    """You are given two strings. write the following code such that
    substring_check("abcd","bc") => True
    substring_check("nohayomitha","nohayomi") => True
    substring_check("abcd","cba") => False
    substring_check("himenamesa","nena") => True
    substring_check("himenamesa","simen") => False
    substring_check("efef","fef") => True
    substring_check("celeroatrato","alo") => True
    """
    
    return b in a
    """
