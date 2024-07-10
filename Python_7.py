```
strings = input("Enter the list of strings (comma separated): ").strip().split(",")
substring = input("Enter the substring to filter by: ").strip()

filtered_strings = [s for s in strings if s and substring]

print([s for s in filtered_strings if substring in s and s.strip()])