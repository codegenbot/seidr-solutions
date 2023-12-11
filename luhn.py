def luhn(nums):
    # Initialize variables
    sum = 0
    is_doubled = False

    # Iterate over the digits in reverse order
    for i in range(len(nums) - 1, -1, -1):
        # Get the current digit and double it if necessary
        digit = nums[i]
        if is_doubled:
            digit *= 2

        # Check if the result is over 9
        if digit > 9:
            sum += (digit - 9)
        else:
            sum += digit

        # Toggle the double flag
        is_doubled = not is_doubled

    return sum