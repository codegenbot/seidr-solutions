def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

input_string = input("Enter a string: ").strip()
print(prefixes(input_string))