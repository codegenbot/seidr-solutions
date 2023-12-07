def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    current_max = numbers[0]
    for i in range(1, len(numbers)):
        if numbers[i] > current_max:
            current_max = numbers[i]
        result.append(current_max)
    return result