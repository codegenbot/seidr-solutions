def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = []
    for num in numbers:
        if numbers.count(num) == 1:
            unique_numbers.append(num)
    return unique_numbers