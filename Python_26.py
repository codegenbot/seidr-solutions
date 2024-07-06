
def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = set()
    for num in numbers:
        if num not in unique_numbers:
            unique_numbers.add(num)
    return list(unique_numbers)