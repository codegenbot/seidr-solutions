def complete_code(string_input, integer_input):
    try:
        return string_input[:integer_input]
    except (IndexError, TypeError):
        return "Invalid input"

string_input = input().rstrip()  # Remove newline character
integer_input = int(input())
output = complete_code(string_input, integer_input)
print(output)