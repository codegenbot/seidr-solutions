def modify_string(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

def check(string):
    return modify_string(string)

# Main code
input_string = input()
result = check(input_string)
print(result)