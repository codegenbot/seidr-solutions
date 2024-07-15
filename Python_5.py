def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []
    
    result = [str(numbers[0])]
    
    for i in range(1, len(numbers)):
        result.append(str(delimiter))
        result.append(str(numbers[i]))
        
    return result