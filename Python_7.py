```
strings = input("Enter space separated strings: ").lower().split()
substring = ""

try:
    substring = input("Enter a substring to search: ").lower()
except ValueError:
    print("Invalid input. Please provide a valid substring.")
    exit()

if not strings or not substring:
    print("Invalid input. Please provide at least one string and at least one character to search for.")
else:
    result = [s for s in strings if substring in s]
    
    if not result:
        print(f"Substrings '{substring}' not found in any of the provided strings.")
    else:
        print(result)