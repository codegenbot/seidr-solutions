```
def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    max_seen_so_far = numbers[0]

    for num in numbers[1:]:
        max_seen_so_far = max(num, max_seen_so_far)
        result.append(max_seen_so_far)

    return result