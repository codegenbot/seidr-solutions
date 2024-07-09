def modify_string(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

result = modify_string(input("Enter a string: "))
print(result)