
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_val = float('-inf')
    for i in numbers:
        if i > max_val:
            max_val = i
        result.append(max_val)
    return result