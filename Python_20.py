numbers = []

for line in iter(input, ''):
    numbers.extend([float(num) for num in line.split()])