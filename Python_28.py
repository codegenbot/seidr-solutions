```
from typing import List

def concatenate(input_list: List[str]) -> str:
    while True:
        try:
            input_list = [input(f"Enter string ({i+1}/n): ") for i in range(int(input("How many strings do you want to enter? "))]
            break
        except ValueError as e:
            print(e)

    if not isinstance(input_list, list):
        raise ValueError("Input must be a list")
    for string in input_list:
        if not isinstance(string, str):
            raise ValueError("All elements in the list must be strings")

    result = ''
    for string in input_list:
        result += string + ' '
    return result.strip()