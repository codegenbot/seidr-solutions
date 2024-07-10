num_strings = int(input().strip())
strings = [input().strip() for _ in range(num_strings)]
substring = input().strip()

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)