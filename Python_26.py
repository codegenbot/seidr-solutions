from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(map(int, input("Enter space-separated numbers: ").split())))