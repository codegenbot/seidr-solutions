```
def get_closest_elements(numbers, target_sum):
    closest_pair = None
    min_diff = float('inf')
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            pair_sum = numbers[i] + numbers[j]
            if abs(pair_sum - target_sum) < min_diff:
                min_diff = abs(pair_sum - target_sum)
                closest_pair = (numbers[i], numbers[j])
    return closest_pair