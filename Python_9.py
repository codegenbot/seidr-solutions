```
def rolling_max(numbers: list) -> list:
    result = [max(numbers[i-k:i+1]) for i in range(k, len(numbers))]
    return result