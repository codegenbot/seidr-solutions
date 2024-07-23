from typing import List


def filter_by_prefix() -> List[str]:
    while True:
        try:
            strings = input(
                "Enter a list of strings (prefix followed by space-separated values): "
            )
            filtered_strings = []
            for s in strings.split():
                if s.strip().startswith(split[0].strip()):
                    filtered_strings.append(s)
            return filtered_strings
        except ValueError as e:
            print(f"Error: {e}")
        finally:
            input("Press Enter to continue...")