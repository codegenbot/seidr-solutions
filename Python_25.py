```
def find_closest_sum(numbers: List[int], target: int) -> int:
    min_diff = float('inf')
    closest_sum = 0
    for i in range(len(numbers)):
        current_sum = sum([numbers[j] for j in range(i, len(numbers))])
        diff = abs(target - current_sum)
        if diff < min_diff:
            min_diff = diff
            closest_sum = current_sum
    return closest_sum