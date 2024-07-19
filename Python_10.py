def complete_code(string_input, integer_input):
    try:
        return string_input.strip()[: int(integer_input)]
    except (IndexError, TypeError):
        return "Invalid input"


input_values = input("Enter a string and an integer separated by space: ").split()
string_input = input_values[0]
integer_input = input_values[1]
output = complete_code(string_input, integer_input)
print(output)