def toggle_case(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

input_string = input("Enter a string: ")
print(toggle_case(input_string))