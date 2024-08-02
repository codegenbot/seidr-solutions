def remove_duplicates(numbers: list[int]) -> list[int]:
    return [num for num in numbers if numbers.count(num) == 1]