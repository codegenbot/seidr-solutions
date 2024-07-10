from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, strings))
    return result

input_list = input("Enter the list of strings (separated by space): ")
strings = [string.strip() for string in input_list.split(",")]
print(concatenate(strings))