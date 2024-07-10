```
def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for i, num in enumerate(numbers) if num not in numbers[:i]]