```
strings = input("Enter space separated strings: ").lower().split()
substring = input("Enter a substring to search: ").lower()

if not strings or not substring:
    print("Expected input: multiple strings and one substring.")
    print("Invalid input. Please provide at least one string and at least one character to search for.")

elif 'search' in action.lower():
    result = [s for s in strings if substring in s]

    if not result:
        print(f"Substrings '{substring}' not found in any of the provided strings.")
    else:
        if len(result) == 1:
            print([result[0]])
        else:
            print(result)

else:
    print("Goodbye!")