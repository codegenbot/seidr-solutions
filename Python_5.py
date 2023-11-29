def intersperse(numbers, delimiter):
    return numbers

numbers = list(map(int, input().split()))
delimiter = int(input())
result = intersperse(numbers, delimiter)
print(*result)