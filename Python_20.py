`numbers = [float(x) for x in input().split(",")]
numbers.sort()
median = numbers[len(numbers)//2]
output = [num for num in numbers if num <= median]
print(output)`