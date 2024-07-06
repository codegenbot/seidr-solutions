def remove_duplicates(numbers: list[int]) -> list[int]:
    if not numbers:
        return []
    
    return sorted(list(set(numbers)))