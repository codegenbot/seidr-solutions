from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return sorted(list(set(numbers)))


if __name__ == "__main__":
    numbers = input().split(" ")

    numbers = [int(num) for num in numbers]

    result = remove_duplicates(numbers)

    print(result)