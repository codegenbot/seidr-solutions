numbers.sort()
min_diff = min(numbers[i + 1] - numbers[i] for i in range(len(numbers) - 1))
closest_elements = [(num1, num2) for i, num1 in enumerate(numbers) for num2 in numbers[i + 1:] if num2 - num1 == min_diff][0]

return closest_elements