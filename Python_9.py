
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    current_max = 0
    for i in range(len(numbers)):
        if numbers[i] > current_max:
            current_max = numbers[i]
        result.append(current_max)
    return result