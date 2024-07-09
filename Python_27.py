def convert_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

# Call the function with appropriate input
input_string = input("Enter a string: ")
result = convert_case(input_string)
print(result)