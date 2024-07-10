def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

num_strings = int(input())
strings = [input() for _ in range(num_strings)]
substring = input().strip()

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)