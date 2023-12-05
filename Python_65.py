def circular_shift(x, shift):
    # convert x to a string
    s = str(x)
    
    # get the length of the string
    n = len(s)
    
    # calculate the number of digits to shift
    k = shift % n
    
    # reverse the string
    t = s[::-1]
    
    # return the reversed string with the first k characters removed
    return t[:n-k] + t[n-k:]