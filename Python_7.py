num_strings = int(input("Enter the number of strings: "))
strings = [input() for _ in range(num_strings)]
substring = input()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)