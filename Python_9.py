def rolling_max(numbers: list[int]) -> list[int]:
    result = []
    current_max = float("-inf")

    for num in numbers:
        current_max = max(current_max, num)
        result.append(current_max)

    return result