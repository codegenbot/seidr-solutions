numbers = [float(x) for x in input().split(",")]
def find_closest_elements(numbers):
    numbers.sort()
    result = []
    min_diff = float('inf')
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i+1])
        if diff < min_diff:
            result = [numbers[i], numbers[i+1]]
            min_diff = diff
    return result