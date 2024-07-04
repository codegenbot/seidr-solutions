def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

input_string = input().strip()  # Ensuring any leading/trailing whitespace is removed
print(prefixes(input_string))