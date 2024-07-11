```
def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num])
        if len(result) >= 2 and result[-2] == delimeter:
            result.append(delimeter)
    return result