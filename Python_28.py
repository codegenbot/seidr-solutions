from typing import List


def concatenate(strings: List[str] = []) -> str:
    user_input = input("Enter some strings (space-separated): ")
    result = "".join([s.strip() for s in user_input.split()])
    return result