def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []
    
    result = []
    
    for i in range(len(numbers)):
        if i > 0:
            result.append(str(delimiter))
        result.extend([str(numbers[i-1]), str(delimiter), str(numbers[i])])
        
    return result