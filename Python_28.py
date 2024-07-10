from typing import List


def concatenate(strings: List[str]) -> str:
    input_str = " ".join(input("Enter strings (comma separated): ").split(","))
    return input_str