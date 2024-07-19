def complete_code(string, i):
    return string + string[: i + 1][::-1] if i >= 0 else string[:-1][::-1] + string[:]

output = complete_code(input("Enter a string: "), int(input("Enter an integer: ")))
print(output)