
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
    return


def check(func):
    assert func("") == 0, "Error"
    assert func("abAB") == 131, "Error"
    assert func("abcCd") == 67, "Error"
    assert func("helloE") == 69, "Error"
    assert func("woArBld") == 131, "Error"
    assert func("aAaaaXa") == 153, "Error" # ERROR HERE
    assert func("kfjdvnkjfndjkvnjfndjvnkjdfnjkvnjkdnjvndfjvndjvnjkdnvjkdfnjkvnjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnvjkdnv
    assert func("You arE Very Smart") == 327, "Error" # ERROR HERE


        digitSum("You arE Very Smart") => 327
    return
    """
