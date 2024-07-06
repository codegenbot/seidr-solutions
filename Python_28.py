from typing import List


def concatenate(strings: List[str]) -> str:
    result = "".join([s.strip() for s in strings]).strip()

    if len(result) == 0:
        return "Invalid input. Please enter some values."
    else:
        return result