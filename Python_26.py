```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    while True:
        print("Enter comma-separated integers: ")
        numbers = input()
        if numbers:
            try:
                numbers = [int(num) for num in numbers.split(",")]
                print(remove_duplicates(numbers))
            except ValueError:
                print("Invalid input. Please enter comma-separated integers.")
        else:
            print("Invalid input. Please enter some values.")