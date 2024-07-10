from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    numbers = input("Enter numbers (space-separated): ").split()
    numbers = [int(num) for num in numbers]
    print(remove_duplicates(numbers))