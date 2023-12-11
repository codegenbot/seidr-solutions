def luhn(numbers):
    # Initialize variables
    sum = 0
    is_even = False

    # Iterate over the numbers in reverse order
    for i in range(len(numbers) - 1, -1, -1):
        # Get the current number and its index
        num = numbers[i]
        idx = len(numbers) - i - 1

        # If the index is even, double the number
        if is_even:
            num *= 2

        # If the result of doubling is greater than 9, subtract 9 from it
        if num > 9:
            num -= 9

        # Add the result to the sum
        sum += num

        # Toggle the even flag
        is_even = not is_even

    return sum