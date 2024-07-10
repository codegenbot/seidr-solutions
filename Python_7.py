num_strings = int(input("Enter the number of strings: ").strip())
strings = []
for _ in range(num_strings):
    strings.append(input().strip())
substring = input().strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)