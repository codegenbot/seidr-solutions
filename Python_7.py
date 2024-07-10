```
substring = input("Enter the substring to filter by: ")
strings = input("Enter the list of strings (comma separated): ").strip().split(",")
print([s.strip() for s in strings if substring.lower() in s.lower()])```