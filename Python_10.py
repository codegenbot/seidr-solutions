def complete_code(string, i):
    return string + string[:i + 1][::-1] if string and 0 <= i < len(string) else string[::-1]

string_input = input("Enter a string: ").strip()
integer_input = int(input("Enter an integer: ").strip())
output = complete_code(string_input, integer_input)
print(output)