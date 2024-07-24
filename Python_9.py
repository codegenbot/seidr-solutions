def rolling_max(numbers):
    if not numbers:
        return []

    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(max(numbers[i], result[-1]))

    return result