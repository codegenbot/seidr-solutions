from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        try:
            while True:
                user_input = input("Enter a list of strings (space-separated), or 'stop' if you want to exit: ")
                if user_input.lower() == 'stop':
                    break

                strings = user_input.strip()

                if not strings:
                    print("Please enter valid inputs!")

                prefix = input("Enter a prefix, or 'stop' if you want to filter by this prefix no more: ")

                if not prefix or prefix.lower() == 'stop':
                    raise ValueError("No more prefixes!")

                filtered_strings = [s.strip() for s in strings.split() if s.strip().startswith(prefix)]

                return filtered_strings
        except ValueError as e:
            print(f"Error: {e}")
        finally:
            input("Press Enter to continue...")