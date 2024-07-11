def rolling_max(numbers: List[int]) -> List[int]:
    max_until_now = [max(range(1, i + 1)) for i in range(len(numbers))]
    return [
        i if numbers[i] > max_until_now[i - 1] else max_until_now[i - 1]
        for i in range(1, len(numbers) + 1)
    ]