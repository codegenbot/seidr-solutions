```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    numbers = input("Enter numbers (space-separated): ").split()
    for i, num in enumerate(numbers):
        try:
            numbers[i] = int(num)
        except ValueError:
            print(f"Invalid input '{num}' at position {i}. Please enter integers only.")
            break
    if not all(isinstance(n, int) for n in numbers):
        print("Program did not receive expected input. Try again!")
    else:
        print(remove_duplicates(numbers))