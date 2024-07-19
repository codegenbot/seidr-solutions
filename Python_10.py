def complete_code(string, integer):
    if integer % 2 == 0:
        return string.upper()
    else:
        return string.lower()

string_input = input("Enter a string: ")
integer_input = int(input("Enter an integer: "))
output = complete_code(string_input, integer_input)
print(output)