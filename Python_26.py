from collections import Counter

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [key for key, value in Counter(numbers).items() if value == 1]