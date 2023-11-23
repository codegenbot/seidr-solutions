def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = []
    for number in numbers:
        if numbers.count(number) == 1:
            unique_numbers.append(number)
    return unique_numbers