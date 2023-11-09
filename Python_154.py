def cycpattern_check(a , b):
    if len(a) != len(b):  # if words have different length return false
        return False
    else:  # if words have same length for every letter in word change word if word is a substring return True, if not return False.
        for i in range(len(b)):
            b = b[1:] + b[0]
            if b in a:
                return True
        return False

cycpattern_check("abcd","abd")
cycpattern_check("hello","ell")
cycpattern_check("whassup","psus")
cycpattern_check("abab","baa")
cycpattern_check("efef","eeff")
cycpattern_check("winemtt","tinem")
