def convert_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

string = input("Enter a string in quotes: ").strip()
result = convert_case(string)
print(result)