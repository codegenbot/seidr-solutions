mean = sum(numbers) / len(numbers)
deviations = [abs(num - mean) for num in numbers]
return sum(deviations) / len(deviations)