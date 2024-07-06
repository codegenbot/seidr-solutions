def remove_duplicates(numbers: str) -> list[int]:
    if not numbers:
        return []
    numbers = [int(num) for num in numbers.split()]
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result