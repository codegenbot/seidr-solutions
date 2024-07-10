from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    numbers = input("Enter numbers (comma-separated): ").split(",")
    numbers = [int(num.strip()) for num in numbers]
    print(remove_duplicates(numbers))