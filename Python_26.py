def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = []
    for x in numbers:
        if x not in seen and x not in result:
            seen.add(x)
            result.append(x)
    return result