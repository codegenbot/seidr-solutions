```Python
def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = float("-inf")
    result = [0]  

    for num in numbers:
        max_seen_so_far = max(num, max_seen_so_far)
        result.append(max_seen_so_far)

    return result