def rolling_max(numbers):
    max_so_far = float("-inf")
    result = []
    for num in numbers:
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
    return result