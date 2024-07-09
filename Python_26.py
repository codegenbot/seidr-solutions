def remove_duplicates(numbers: list) -> list:
    return [num for num in numbers if numbers.count(num) == 1]