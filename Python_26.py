```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    while True:
        while True:
            numbers = input("Enter numbers (comma-separated): ").strip()
            if numbers:
                try:
                    numbers = [int(num) for num in numbers.split(",")]
                    break
                except ValueError:
                    print("Invalid input. Please enter comma-separated integers.")
            else:
                print("Invalid input. Please enter some values.")
        print(remove_duplicates(numbers))
        break