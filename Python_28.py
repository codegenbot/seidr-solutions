```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    user_input = input("Enter a list of strings (separated by space): ")
    strings_list = user_input.split()
    result = concatenate(strings_list)
    print(result)