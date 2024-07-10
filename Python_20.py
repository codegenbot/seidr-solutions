while True:
    numbers_str = input("Enter space-separated numbers: ")
    numbers = [float(num) for num in numbers_str.split()]
    if not numbers:  
        print("Please enter some numbers.")
        continue
    elif len(numbers) < 2:
        print("Please enter at least two numbers.")
        continue

    numbers.sort()
    min_diff = float("inf")
    closest_pair = (None, None)

    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair