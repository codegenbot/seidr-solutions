def below_zero(numbers):
    count = 0
    for num in numbers:
        if num < 0:
            count += 1
    return count


operations = list(map(int, input().split()))
result = below_zero(operations)
print(result)