def complete_code(string_input, integer_input):
    return string_input[:integer_input]

string_input = input().strip()
integer_input = int(input().strip())
output = complete_code(string_input, integer_input)
print(output)