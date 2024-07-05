def remove_duplicates(numbers: List[int]) -> List[int]:
    result = []
    counts = {}
    for num in numbers:
        counts[num] = counts.get(num, 0) + 1
    for num in numbers:
        if counts[num] == 1:
            result.append(num)
    return result