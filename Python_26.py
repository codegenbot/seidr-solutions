def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = {}
    result = []
    for num in numbers:
        if num not in seen or seen[num] < len(result):
            seen[num] = len(result)
            result.append(num)
    return result