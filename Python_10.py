def complete_code(string_input, integer_input):
    try:
        return string_input[:integer_input]
    except (IndexError, TypeError, ValueError):
        return "Invalid input"

while True:
    string_input = input("Enter a string: ")
    if string_input.isalpha():
        break
    else:
        print("Please enter a valid string.")

while True:
    integer_input = input("Enter an integer: ")
    if integer_input.isdigit():
        integer_input = int(integer_input)
        break
    else:
        print("Please enter a valid integer.")

output = complete_code(string_input, integer_input)
print(output)