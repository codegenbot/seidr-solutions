def format_numbers(numbers: List[int], delimiter: str) -> List[str]:
    result = []
    for num in numbers[:-1]:
        result.extend([str(num), delimiter])
    if numbers:
        result.append(str(numbers[-1]))
    return result