def add(numbers):
    return sum(numbers)


print("Enter numbers separated by space:")
numbers = [int(num) for num in input().split()]
result = add(numbers)
print(result)