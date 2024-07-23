from typing import List


def filter_by_prefix() -> List[str]:
    result = []
    while True:
        try:
            user_input = input("Enter a list of strings (space-separated): ")
            strings = [s.strip() for s in user_input.split()]

            while True:
                prefix = input("Enter a prefix: ")
                if not prefix:
                    raise ValueError("Please enter a valid prefix!")
                break

            result = [s for s in strings if s.startswith(prefix)]
            return result
        except ValueError as e:
            print(f"Error: {e}")
        finally:
            input("Press Enter to continue...")