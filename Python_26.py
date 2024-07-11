from typing import List


def remove_duplicates() -> List[int]:
    numbers = list(map(int, input("Enter numbers separated by comma: ").split(',')))
    return sorted(set(numbers))


print(remove_duplicates())