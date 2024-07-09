def add(numbers: list):
    return sum(numbers)


numbers = [int(num) for num in input().split()]
result = add(numbers)
print(result)