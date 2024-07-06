```Python
def remove_duplicates(numbers: list[int]) -> list[int]:
    if not numbers:
        return []
    
    unique_numbers = set(numbers)
    sorted_unique_numbers = sorted(unique_numbers)
    return [num for num in sorted_unique_numbers]