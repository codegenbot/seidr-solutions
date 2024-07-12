def find_substring():
    while True:
        strings = input("Enter space separated strings: ").lower().split()
        substring = input("Enter a substring to search: ").lower()

        if not any(s.strip() for s in strings) or len(substring) <= 1:
            print("Expected input: multiple non-empty strings and a substring with more than one character.")
            continue

        break

    action = input("Enter search or quit: ")

    if action == 'search':
        result = [s for s in strings if substring in s]

        if not result:
            print(f"Substrings '{substring}' not found in any of the provided strings.")
        else:
            if len(result) == 1:
                print([result[0]])
            else:
                print(result)
    elif action == 'quit':
        print("Goodbye!")
    else:
        print("Invalid input. Please enter either 'search' or 'quit'.")

find_substring()