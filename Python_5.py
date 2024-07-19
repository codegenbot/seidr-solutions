Here is the completed code:

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i in range(0, len(numbers), 2):
        if i < len(numbers) - 1:
            result.extend([numbers[i], delimeter])
        else:
            result.append(numbers[i])
    return result