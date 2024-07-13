def find_max_value(numbers: List[int]) -> int:
    max_value = numbers[0]
    for num in numbers:
        if num > max_value:
            max_value = num
    return max_value