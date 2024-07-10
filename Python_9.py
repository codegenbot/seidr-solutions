def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(max(numbers[:i+1]))
    return result