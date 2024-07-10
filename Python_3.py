def below_zero(numbers):
    return len([num for num in numbers if num < 0])

operations = list(map(int, input().split(',')))
result = below_zero(operations)
print(result)