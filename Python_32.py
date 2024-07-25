numbers = input("Enter space-separated numbers: ")
result = find_zero([float(num) for num in numbers.split()])
print(result)