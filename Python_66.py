
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
    sum = 0
    for c in s:
        if c.isupper():
            sum += ord(c)
    return sum


def check(fn):
    assert fn("You arE Very Smart") == 327, "Error"
    assert fn("aBcD") == 131, "Error"
    assert fn("") == 0, "Error"
    assert fn("X") == 88, "Error"
    assert fn("b") == 0, "Error"
    print("Ok")

if __name__ == "__main__":
    check(digitSum)
        digitSum("aAaaaXa") => 153
    """
