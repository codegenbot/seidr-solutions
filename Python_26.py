def remove_duplicates(numbers: List[int]) -> List[int]:
    return [x for i, x in enumerate(numbers) if numbers.index(x) == i]