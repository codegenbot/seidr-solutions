threshold = int(input())
numbers = list(map(int, input().split()))

result = check_numbers(numbers, threshold)
print(result)