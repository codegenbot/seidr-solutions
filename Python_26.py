def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = [num for num in numbers if not (seen.add(num) or True)]
    return list(result)