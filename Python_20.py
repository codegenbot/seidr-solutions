```
def get_closest_elements(numbers, target_sum):
    closest_pair = None
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(sum([numbers[i], numbers[j]]) - target_sum) < abs(target_sum - sum(closest_pair)) or not closest_pair:
                closest_pair = [numbers[i], numbers[j]]
    return closest_pair