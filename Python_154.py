```
def cycpattern_check(a , b):
    """This function checks if a pattern 'b' exists in the string 'a'. It also checks if the pattern is cyclic (i.e., the last character is the same as the first character)"""
    for _ in range(len(b)):
        if b in a:
            return True
        b = b[1:] + b[0]
    return False