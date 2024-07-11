def find_max_min(numbers: List[int]) -> str:
    if not numbers:
        return 'No numbers provided'
    min_num = max_num = numbers[0]
    for num in numbers:
        if num < min_num:
            min_num = num
        elif num > max_num:
            max_num = num
    return f'Min: {min_num}, Max: {max_num}'