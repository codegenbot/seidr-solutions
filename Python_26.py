def remove_duplicates(numbers: List[int]) -> List[int]:
    return [number for index, number in enumerate(numbers) if numbers.index(number) == index]