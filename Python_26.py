from typing import List

def remove_duplicates() -> List[str]:
    numbers = list(map(int, input("Enter the list of numbers separated by space: ").split()))
    return list(map(str, set(map(str, numbers))))