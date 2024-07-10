from typing import List

def concatenate(strings: List[str]) -> str:
    print("Enter strings (comma separated): ")
    input_str = input()
    strings = [s.strip() for s in input_str.split(',')]
    return ', '.join(strings)