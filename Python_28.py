```Python
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join([s.strip() for s in strings])

while True:
    try:
        input_list = [str(input("Enter a string (or 'q' to quit): ")).strip() for _ in range(int(input("Enter the number of strings to enter: "))) if input("Enter a string (or 'q' to quit): ").strip() != 'q']
        print(concatenate(input_list))
    except ValueError:
        break