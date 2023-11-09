def cycpattern_check(a , b):
    if len(a) != len(b):  # if word has different length
        return False  # return false
    else:  # if word has same length
        for i in range(len(b)):  # for every letter in word
            b = b[1:] + b[0]  # change word
            if b in a:  # if word is a substring
                return True  # return True

cycpattern_check(a,b)
