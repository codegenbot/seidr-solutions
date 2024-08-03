def modify_string(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

def check(s):
    return modify_string(s)

# Test the check function with a string input
print(check("Hello World"))