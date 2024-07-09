from typing import List


def remove_duplicates() -> List[int]:
    numbers_str = input("Enter space-separated numbers: ")
    numbers_list = list(map(int, numbers_str.split()))
    return list(set(numbers_list))