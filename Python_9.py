def rolling_max(numbers: List[int]) -> List[int]:
    max_value = float('-inf')
    result = []
    for i in range(len(numbers)):
        if numbers[i] > max_value:
            max_value = numbers[i]
        result.append(max_value)
    return result