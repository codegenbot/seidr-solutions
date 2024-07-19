numbers.sort()
return min(zip(numbers, numbers[1:]), key=lambda x: x[1] - x[0])