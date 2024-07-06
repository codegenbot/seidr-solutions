
def remove_duplicates(numbers: List[int]) -> List[int]:
    unique = set()
    for num in numbers:
        if num not in unique:
            unique.add(num)
    return list(unique)