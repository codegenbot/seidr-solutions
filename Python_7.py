strings = input().split()
substring = input()
filtered_strings = [s for s in strings if substring in s]
print(filtered_strings)