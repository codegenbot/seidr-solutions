```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    while True:
        print("Enter comma-separated integers: ")
        numbers = input()
        if not numbers: 
            print("No input entered.")
        else: 
            while True:
                try:
                    numbers = [int(num) for num in numbers.split(",")]
                    print(remove_duplicates(numbers))
                    break
                except ValueError:
                    print("Invalid input. Please enter comma-separated integers.")