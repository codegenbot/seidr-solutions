mean = sum(numbers) / len(numbers)
mad = sum(abs(x - mean) for x in numbers) / len(numbers)
return mad