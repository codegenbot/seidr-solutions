num_strings = int(input().strip())
strings = [input().strip() for _ in range(num_strings)]
substring = input().strip()

def filter_strings(strings, substring):
    return [string for string in strings if substring in string]

filtered_strings = filter_strings(strings, substring)
for s in filtered_strings:
    print(s)