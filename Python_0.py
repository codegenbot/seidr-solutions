numbers.sort()
for i in range(len(numbers) - 1):
    if abs(numbers[i] - numbers[i + 1]) < threshold:
        return True
return False