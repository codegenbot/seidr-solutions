# Sort the numbers list
numbers.sort()

# Iterate over the sorted list
for i in range(len(numbers) - 1):
    if abs(numbers[i] - numbers[i + 1]) < threshold:
        return True

# Return False if threshold condition is not met
return False