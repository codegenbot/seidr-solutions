```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    print("Enter comma-separated integers: ")
    numbers = input()
    while True:
        if numbers:
            try:
                numbers = [int(num) for num in numbers.split(",")]
                print(remove_duplicates(numbers))
                break
            except ValueError:
                print("Invalid input. Please enter comma-separated integers.")
        else:
            print("Invalid input. Please enter some values.")