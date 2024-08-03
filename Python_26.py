def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = set()
    duplicates = set()
    
    for num in numbers:
        if num not in duplicates:
            if num in unique_numbers:
                unique_numbers.remove(num)
                duplicates.add(num)
            else:
                unique_numbers.add(num)
    
    return list(unique_numbers)