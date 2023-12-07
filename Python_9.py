```
def rolling_max(numbers: list[int]) -> List[int]:
    result = []
    current_max = -1
    for num in numbers:
        if num > current_max:
            current_max = num
        result.append(current_max)
    return result
```