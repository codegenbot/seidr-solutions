def add(numbers):
    return sum(numbers)

numbers = list(map(int, input().split()))
result = add(numbers)
print(result)