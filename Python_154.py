
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    s2 = b
    s1 = a
    if len(s1) < len(s2):
        s1,s2 = s2,s1
        
    if s2 == "":
        return False
    
    for i in range(len(s1)):
        if s1[i] == s2[0]:
            if s2 == s1[i:i+len(s2)]:
                return True
    
    return False
    """
