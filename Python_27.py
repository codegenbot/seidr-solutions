def convert_string_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

input_string = input("Enter a string: ")
output = convert_string_case(input_string)
print(output)