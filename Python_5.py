```
def intersperse(numbers: List[int], delimiters: List[int]) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num] + delimiters)
    return result