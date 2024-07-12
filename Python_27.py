def transform_string(string):
    return "".join(char.lower() if char.isupper() else char.upper() for char in string)

input_string = input("Enter a string: ")
result = transform_string(input_string)
print(result)