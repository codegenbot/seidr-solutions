from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    try:
        input_numbers = list(map(int, input().split()))
        result = remove_duplicates(input_numbers)
        print(result)
    except ValueError:
        print("Invalid input. Please enter a list of integers.")