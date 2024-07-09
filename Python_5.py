def intersperse(numbers: List[int], delimiter: int) -> str:
    result = ''
    for i, number in enumerate(numbers):
        if i > 0:
            result += f',{delimiter} {number}'
        else:
            result += str(number)
    return result