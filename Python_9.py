def rolling_max(numbers: list[int]) -> list[int]:
    """Return a list of the maximum value reached so far at each position in the input list."""
    result = []
    max_so_far = numbers[0]
    for num in numbers:
        result.append(max(num, max_so_far))
        if num > max_so_far:
            max_so_far = num
    return result