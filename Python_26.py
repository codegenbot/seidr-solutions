def remove_duplicates(numbers: list[int]) -> list[int]:
    seen = set()
    result = []
    for num in numbers:
        if str(num) not in seen:
            seen.add(str(num))
            result.append(int(str(num)))
    return [int(num) for num in result]