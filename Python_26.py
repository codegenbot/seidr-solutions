def remove_duplicates(numbers: list[int]) -> list[int]:
    result = []
    for num in numbers:
        if num not in result:
            result.append(num)
    return result