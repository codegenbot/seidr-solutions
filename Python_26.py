```
def remove_duplicates(numbers: list[int]) -> list[int]:
    if not numbers:
        return []
    
    return [num for i, num in enumerate(sorted(set((num for num in numbers)))) if i == numbers.index(num)]