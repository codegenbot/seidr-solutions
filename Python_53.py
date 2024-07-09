def add(numbers: list):
    return sum(numbers)

numbers = [int(num) for num in input().strip().split()]
result = add(numbers)
print(result)