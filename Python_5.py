def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    if len(numbers) < 2:
        return [numbers[0]] if numbers else []
    
    result = [numbers[0]]
    
    for num in numbers[1:]:
        result.append(delimiter)
        result.append(num)
    return result