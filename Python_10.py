def complete_code(string, i):
    return string + string[:i + 1][::-1] if i >= 0 else string.strip()[:-1][::-1] + string.strip()[:]

string_input = input("Enter a string: ").strip()
integer_input = int(input("Enter a non-negative integer: ").strip())
output = complete_code(string_input, integer_input)
print(output)