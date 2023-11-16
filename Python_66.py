
def digitSum(s):
    """
    Task
    Write a function that takes a string as input and returns the sum of the upper characters only
    ASCII codes. Assume that the input string contains only lower case and upper case characters.

    Examples:
        digitSum("") => 0
        digitSum("abAB") => 131
        digitSum("abcCd") => 67
        digitSum("helloE") => 69
        digitSum("woArBld") => 131
    pass
    sum = 0
    for i in s:
        if i.isupper():
            sum += ord(i)
    return sum


print(digitSum("You arE Very Smart"))
        digitSum("aAaaaXa") => 153
    """
