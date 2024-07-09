from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]


numbers = list(map(int, input("Enter numbers separated by space: ").split()))
print(remove_duplicates(numbers))