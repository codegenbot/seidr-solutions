def rolling_max(numbers: list) -> list:
    result = [numbers[0]]
    max_so_far = numbers[0]
    for num in numbers[1:]:
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
    return result