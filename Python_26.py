def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return [x for x in sorted((i, num) for i, num in enumerate(result))][::1]