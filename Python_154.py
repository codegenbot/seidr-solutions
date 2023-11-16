def cycpattern_check(big , small):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    big = big.lower()
    small = small.lower()
    len_big = len(big)
    len_small = len(small)
    if len_big < len_small:
        return False
    for i in range(len_big):
        if big[i] == small[0]:
            chk = True
            if i + len_small > len_big:
                return False
            for j in range(1, len(small)):
                    if big[i+j] != small[j]:
                        chk = False
                        break
            if chk == True:
                return True
    return False

print(cycpattern_check("hello","ell"))
print(cycpattern_check("whassup","psus"))
print(cycpattern_check("abab","baa"))
print(cycpattern_check("efef","eeff"))
print(cycpattern_check("himenss","simen"))
    """
