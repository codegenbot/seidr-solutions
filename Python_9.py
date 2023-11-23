def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = [numbers[0]]
    for i in range(1, len(numbers)):
        max_numbers.append(max(max_numbers[i-1], numbers[i]))
    return max_numbers