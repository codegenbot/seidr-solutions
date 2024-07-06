```
def double_the_difference(numbers):
    if len(numbers) < 2:
        return None
    first_diff = numbers[0] - numbers[1]
    rest_diffs = [numbers[i] - numbers[i + 1] for i in range(1, len(numbers) - 1)]
    rest_diffs.append((numbers[-1] - (numbers[-2] if len(numbers) > 2 else None)))
    return abs(first_diff - sum(rest_diffs)) * 2

print(double_the_difference([1, 2, -3, 4]))