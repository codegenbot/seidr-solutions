```
strings = input("Enter space separated strings: ").lower().split()
substring = input("Enter a substring to search: ").lower()

if not strings or not substring:
    print("Invalid input. Please provide at least one string and at least one character to search for.")
else:
    if substring not in ' '.join(strings):
        print(f"Substrings '{substring}' not found in any of the provided strings.")
    else:
        result = [s for s in strings if substring in s]
        if len(result) == 1:
            print([result[0]])
        else:
            print(result)