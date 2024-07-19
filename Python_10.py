def complete_code(string_input, integer_input):
    output = string_input[:integer_input] + string_input[integer_input+1:]
    return output