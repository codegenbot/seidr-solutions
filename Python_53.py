def add(numbers: list):
    return sum(numbers)

numbers = [int(num) for num in input("Enter numbers separated by spaces: ").split()]
result = add(numbers)
print(result)