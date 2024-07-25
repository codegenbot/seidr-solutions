def find_zero(numbers):
    for num in numbers:
        if num == 0:
            return "Zero found"
    return "Zero not found"
    
numbers = input("Enter space-separated numbers: ")
result = find_zero([float(num) for num in numbers.split()])
print(result)