```
def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_seen_so_far = numbers[0]
    for num in numbers:
        result.append(max(num, max_seen_so_far))
        if num > max_seen_so_far:
            max_seen_so_far = num
    return result