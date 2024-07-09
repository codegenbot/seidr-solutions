def add(numbers):
    return sum(numbers)

numbers = [int(num) for num in input('Enter numbers separated by space: ').split()]
result = add(numbers)
print(result)