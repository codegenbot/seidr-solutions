def filter_by_substring(input_str, substring):
    return [s for s in input_str if substring.lower() in s.lower()]


def find_substring():
    while True:
        try:
            input_str = input("Enter space separated strings: ").lower().split()
            if not input_str:
                raise ValueError
        except ValueError:
            print("Invalid input. Please enter at least one string.")
            continue

        substring = input("Enter a substring to search: ").lower()

        while True:
            action = input("Enter search or quit: ")
            if action.lower() in ["search", "quit"]:
                break
            else:
                print("Invalid input. Please enter either 'search' or 'quit'.")

        if action == "search":
            result = filter_by_substring(input_str, substring)

            if not result:
                print(
                    f"Substrings '{substring}' not found in any of the provided strings."
                )
            else:
                if len(result) == 1:
                    print([result[0]])
                else:
                    print(result)
        elif action == "quit":
            print("Goodbye!")
            exit()