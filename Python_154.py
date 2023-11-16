
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    def rotate_string(s):
        return s[-1] + s[:-1]
        
        
    a=list(a)
    b=list(b)
    #print(a,b)
    a="".join(a)
    b="".join(b)
    c=rotate_string(b)
    #print(c)
    for x in range(len(b)):

        a_new=a.split(c)
        if len(a_new)>=2:

            break
        c=rotate_string(c)
        #print(c)
        
    #print(a_new)      
    #print(a_new , b)
    if len(a_new)>=2:
        return True
    else:
        return False


print(cycpattern_check("hello","ell"))
    """
