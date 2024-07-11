from typing import List

def concatenate(strings: List[str]) -> str:
    user_input = input("Enter space-separated strings: ")
    input_list = [s.strip() for s in user_input.split()]
    return ''.join(input_list)