def complete_code(string, i):
    return string + string[:i + 1][::-1] if i >= 0 else string[:-1][::-1]

string_input = input("Enter a string: ")
integer_input = int(input("Enter an integer from 0 to the length of the string: "))
output = complete_code(string_input, integer_input)
print(output)