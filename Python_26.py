def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = list(set(numbers))
    return sorted([i for i in numbers if i in unique_numbers])