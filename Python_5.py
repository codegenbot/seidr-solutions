def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimiter:
            result.append(num)
        else:
            result.extend([num, delimiter])
    return result