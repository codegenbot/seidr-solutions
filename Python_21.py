numbers.sort()
return [(num - numbers[0]) / (numbers[-1] - numbers[0]) for num in numbers]