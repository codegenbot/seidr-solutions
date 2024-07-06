def find_closest_elements(numbers):
    numbers.sort()
    closest = (numbers[0], numbers[1])
    for i in range(1, len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < abs(closest[0] - closest[1]):
            closest = (numbers[i], numbers[i + 1])
    return closest