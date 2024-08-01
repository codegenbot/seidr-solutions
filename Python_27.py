def check(func):
    # some code to check the implementation of the function
    pass

def transform_string(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

check(transform_string)