def invert_case(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

input_string = input()
result = invert_case(input_string)
print(result)