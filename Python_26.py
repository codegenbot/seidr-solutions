def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = [num for num in numbers if num not in seen and seen.add(num) or True]
    return result