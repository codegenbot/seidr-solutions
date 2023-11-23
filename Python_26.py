def remove_duplicates(numbers: List[int]) -> List[int]:
    return [number for number in numbers if numbers.count(number) == 1]