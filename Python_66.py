
def digitSum(s):
    """Task
    Write a function that takes a string as input and returns the sum of the upper characters only'
    ASCII codes.

    Examples:
        digitSum("") => 0
        digitSum("abAB") => 131
        digitSum("abcCd") => 67
        digitSum("helloE") => 69
        digitSum("woArBld") => 131 
    """
    s = s.upper() # upper case
    total = 0
    for i in s:
        if ord(i) >= 65 and ord(i) <= 90:
            total += ord(i)
    return total
    
