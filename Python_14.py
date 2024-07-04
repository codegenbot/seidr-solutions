def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

input_strings = input().split()
for input_string in input_strings:
    print(prefixes(input_string))