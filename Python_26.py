from typing import List


def remove_duplicates(numbers_str: str) -> List[int]:
    seen = set()
    result = []
    for num in map(int, numbers_str.split(',')):
        seen.add(num)
    return list(seen)


numbers_str = input("Enter numbers separated by commas: ")
print(remove_duplicates(numbers_str))