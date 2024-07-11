def remove_duplicates(numbers: list[int]) -> list[int]:
    return list(set([num for num in numbers if numbers.count(num) == 1]))