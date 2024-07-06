from typing import List

def read_integers() -> List[int]:
    input_str = input("Enter numbers separated by space: ")
    integers = list(map(int, input_str.split()))
    return integers

print(read_integers())