def modify_string(string: str) -> str:
    return string.swapcase()


def check():
    string = input("Enter a string containing both upper and lower case letters: ")
    return modify_string(string)


print(check())