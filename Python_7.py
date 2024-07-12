```
strings = input("Enter space separated strings: ").lower().split()
substring = input("Enter a substring to search: ").lower()

if not strings or not substring:
    print("Invalid input. Please provide at least one string and at least one character to search for.")
else:
    result = [s for s in strings if substring in s]
    
    if not result:
        print("No strings contain the given substring.")
    else:
        print(result)