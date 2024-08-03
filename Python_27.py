def modify_string(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

def check(modify_string):
    test_string = "Hello World"
    result = modify_string(test_string)
    return result