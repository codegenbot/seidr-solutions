from typing import List


def remove_duplicates() -> List[int]:
    numbers_str = input("Enter numbers separated by commas: ")
    numbers = list(map(int, numbers_str.split(',')))
    seen = set()
    result = []
    for num in numbers:
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return result