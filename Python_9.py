def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_until_now = numbers[0]
    for num in numbers:
        if num > max_until_now:
            max_until_now = num
        result.append(max_until_now)
    return result