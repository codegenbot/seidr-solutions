def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = []
    for num in numbers:
        if num not in seen:
            seen[num] = 1
            result.append(num)
    return result