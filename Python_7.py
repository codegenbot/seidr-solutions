```
def find_substring():
    while True:
        try:
            input_str = input("Enter space separated strings: ").lower().split()
            if not input_str:
                print("Expected multiple strings. Please enter again.")
                continue
            substring = input("Enter a substring to search: ").lower()

            while True:
                action = input("Enter search or quit: ")
                if action in ["search", "quit"]:
                    break
                else:
                    print("Invalid input. Please enter either 'search' or 'quit'.")

            if action == "search":
                result = [s for s in input_str if substring in s]

                if not result:
                    print(f"Substrings '{substring}' not found in any of the provided strings.")
                else:
                    if len(result) == 1:
                        print([result[0]])
                    else:
                        print(result)
            elif action == "quit":
                print("Goodbye!")
        except (ValueError, TypeError):
            print("Expected multiple strings. Please enter again.")


find_substring()