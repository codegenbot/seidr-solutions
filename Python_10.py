def complete_code(string_input, integer_input):
    try:
        return string_input[:integer_input]
    except (IndexError, TypeError):
        return "Invalid input"

string_input = input("Enter a string: ").rstrip()  # Remove newline character
integer_input = int(input("Enter an integer: "))
output = complete_code(string_input, integer_input)
print(output)