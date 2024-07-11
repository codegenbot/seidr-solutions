from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = [i for i in numbers if i not in seen and not seen.add(i)]
    return list(result)