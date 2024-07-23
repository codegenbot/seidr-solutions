def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 1:
        return [numbers[0]]
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter] + [str(numbers[i])])
    result.append(delimiter)
    return [
        int(x) if x.isdigit() else x for x in str(result).replace(str(delimiter), ",")
    ]