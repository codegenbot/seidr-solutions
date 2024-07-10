def rolling_max(numbers: list[int]) -> list[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(max(result[-1], numbers[i]))
    return result