num_strings = input().strip()
if not num_strings.isdigit():
    raise ValueError("First input should be an integer.")

num_strings = int(num_strings)
strings = []
for _ in range(num_strings):
    strings.append(input().strip())
substring = input().strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
print('\n'.join(filtered_strings))