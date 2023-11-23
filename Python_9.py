def rolling_max(numbers: List[int]) -> List[int]:
    maximums = []
    for i in range(len(numbers)):
        maximums.append(max(numbers[:i+1]))
    return maximums