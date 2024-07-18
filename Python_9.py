def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_element = float('-inf')
    for num in numbers:
        max_element = max(max_element, num)
        result.append(max_element)
    return result