def add(numbers):
    return sum(numbers)


n = int(input())
numbers = [int(num) for num in input().split()]
result = add(numbers)
print(result)