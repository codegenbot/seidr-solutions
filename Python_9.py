def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(numbers[i: j+1]) for i in range(len(numbers)) for j in range(i, len(numbers))]
    return sorted(set(result))