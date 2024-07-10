from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    numbers = input("Enter a list of numbers (space-separated): ").split()
    print(remove_duplicates([int(num) for num in numbers]))