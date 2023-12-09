def circular_shift(x, shift):
    # Convert x to a string and get its length
    s = str(x)
    n = len(s)
    
    # Calculate the number of digits to shift
    k = shift % n
    
    # Reverse the string if k > n
    if k > n:
        return s[::-1]
    
    # Otherwise, circularly shift the digits
    else:
        return s[-k:] + s[:-k]