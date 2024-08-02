from typing import List


def concatenate(strings: List[str]) -> str:
    user_input = input("Enter multiple strings (comma-separated): ")
    input_list = [i.strip() for i in user_input.split(",")]
    return ''.join(input_list)