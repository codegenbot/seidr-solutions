def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

num_strings = int(input("Enter the number of strings: ").strip())
strings = [input("Enter string " + str(i+1) + ": ").strip() for i in range(num_strings)]
substring = input("Enter the substring to filter: ").strip()

filtered_strings = filter_strings(strings, substring)
print(filtered_strings)