def find_closest_elements(numbers):
    numbers = sorted(map(int, numbers))
    diff = float('inf')
    closest_pair = ()

    for i in range(len(numbers) - 1):
        pair_diff = abs(numbers[i + 1] - numbers[i])
        if pair_diff < diff:
            diff = pair_diff
            closest_pair = (numbers[i], numbers[i + 1])

    return f"The closest numbers are {closest_pair[0]} and {closest_pair[1]}, which differ by {diff}."