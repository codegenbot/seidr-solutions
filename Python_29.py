from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> (List[str], str):
    while True:
        try:
            if not strings or not prefix:
                raise ValueError("Please enter valid inputs!")

            return [s.strip() for s in strings if s.strip().startswith(prefix)], prefix
        except ValueError as e:
            print(f"Error: {e}")