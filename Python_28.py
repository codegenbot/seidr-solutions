from typing import List

def concatenate(strings: List[str]) -> str:
    user_input = input("Please enter a list of strings separated by commas (no spaces): ")
    strings = [s.strip() for s in user_input.split(",")]
    return ''.join(strings)