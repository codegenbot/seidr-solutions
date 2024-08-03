from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

numbers = input("Enter a list of integers separated by space: ")
numbers = [int(num) for num in numbers.split()]

print(remove_duplicates(numbers))