```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


if __name__ == "__main__":
    user_input = input("Enter a list of numbers separated by space: ")
    numbers = list(map(int, user_input.split()))
    print(remove_duplicates(numbers))