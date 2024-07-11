def find_closest_pair(numbers):
    numbers.sort()
    min_diff = float("inf)
    closest_pair = (0, 0)

    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < min_diff:
            min_diff = abs(numbers[i] - numbers[i + 1])
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair

numbers = list(map(int, input("Enter a list of numbers separated by space: ").split()))
result = find_closest_pair(numbers)
print(result)