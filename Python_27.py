def convert_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

string = raw_input("Enter a string: ")
result = convert_case(string)
print(result)