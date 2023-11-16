
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word.
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True"""

    # Start your code here
    
    if len(a)>len(b):
        for i in range(len(a)):
            if a[i]==b[0]:
                if a[i:i+len(b)]==b:
                    return True
        return False
    else:
        for i in range(len(b)):
            if b[i]==a[0]:
                if b[i:i+len(a)]==a:
                    return True
        return False
    








# Test cases
print(cycpattern_check("abcd","abd"))
print(cycpattern_check("hello","ell"))
print(cycpattern_check("whassup","psus"))
print(cycpattern_check("abab","baa"))
print(cycpattern_check("efef","eeff"))
print(cycpattern_check("himenss","simen"))
