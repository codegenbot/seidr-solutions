# Sort the numbers list
    numbers.sort()

    # Check if any two numbers are closer than the threshold
    for i in range(len(numbers) - 1):
        if numbers[i+1] - numbers[i] < threshold:
            return True

    return False