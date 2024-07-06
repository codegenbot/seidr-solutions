Here is the completed code:

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) == 0:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        result.append(num)
        result.append(delimeter)
    if result[-1] == delimeter:
        result.pop()
    return result