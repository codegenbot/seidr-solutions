```
def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    max_ending_here = numbers[0]
    for num in numbers[1:]:
        max_ending_here = max(num, max_ending_here)
        result.append(max_ending_here)
    return result