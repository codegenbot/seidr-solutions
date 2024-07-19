def complete_code(string_input, integer_input):
    return string_input[:integer_input]


string_input = input().rstrip()
integer_input = int(input().rstrip())
output = complete_code(string_input, integer_input)
print(output)