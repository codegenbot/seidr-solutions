from typing import List

def concatenate(strings: List[str]) -> str:
    input_str = input("Enter strings (comma separated): ")
    strings = [s.strip() for s in input_str.split(',')]
    return ', '.join(strings)