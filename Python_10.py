def complete_code(string_input, integer_input):
    try:
        return string_input.strip()[:int(integer_input)]
    except (IndexError, TypeError, ValueError):
        return "Invalid input"

string_input = input("Enter a string: ")
integer_input = input("Enter an integer: ")
output = complete_code(string_input, integer_input)
print(output)