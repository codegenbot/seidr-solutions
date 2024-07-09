def add(numbers: list):
    return sum(numbers)

numbers = [int(num) for num in input("Enter integers separated by space: ").split()]
result = add(numbers)
print(result)