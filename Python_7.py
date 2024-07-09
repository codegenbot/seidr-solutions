def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

input_str = input()
strings, substring = input_str.split(";")
strings = strings.split()
print(filter_strings(strings, substring))