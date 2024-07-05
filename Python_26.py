from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    freq = {}
    for num in numbers:
        freq[num] = freq.get(num, 0) + 1
    return [num for num in numbers if freq[num] == 1]