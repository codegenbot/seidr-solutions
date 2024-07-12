```
def find_substring():
    strings = input("Enter space separated strings: ").lower().split()
    substring = input("Enter a substring to search: ").lower()

    if not (strings or substring):
        print("Expected input: multiple strings and one substring.")
    else:
        while True:
            action = input("Enter search or quit: ")

            if action == "search":
                result = [s for s in strings if substring in s]

                if not result:
                    print(f"Substrings '{substring}' not found in any of the provided strings.")
                else:
                    if len(result) == 1:
                        print([result[0]])
                    else:
                        print(result)
                break
            elif action == "quit":
                print("Goodbye!")
                break
            else:
                print("Invalid input. Please enter either 'search' or 'quit'.")


find_substring()