
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    # This is an implementation of the Knuth Morris Pratt Algorithm
    
    max_len = len(a)
    max_len2 = len(b)
    
    if max_len2 > max_len:
        return False
    
    if max_len2 == max_len:
        if a == b:
            return True
        else:
            return False

    index_array = [0] * max_len

    i = 1
    j = 0

    while i < max_len:
        if a[i] == a[j]:
            j += 1
            index_array[i] = j
            i += 1
        else:
            if j != 0:
                j = index_array[j - 1]
            else:
                index_array[i] = 0
                i += 1


    i = 0
    j = 0

    while i < max_len2 and j < max_len:
        if b[i] == a[j]:
            i += 1
            j += 1
        else:
            if j != 0:
                j = index_array[j-1]
            else:
                i += 1
    
    if j == max_len:
        return True
    return False























































    """
