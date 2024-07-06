def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    unique_numbers = [num for num in numbers if not (seen.add(num), seen)[1]]
    return unique_numbers