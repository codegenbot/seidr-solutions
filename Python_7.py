num_strings = int(input("Enter the number of strings: ").strip())
strings = [input("Enter string: ").strip() for _ in range(num_strings)]
substring = input("Enter the substring to filter by: ").strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print('\n'.join(filtered_strings))