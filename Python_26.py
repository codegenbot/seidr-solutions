def remove_duplicates(numbers: set[int]) -> list[int]:
    return [num for num in numbers if len([n for n in numbers if n == num]) == 1]