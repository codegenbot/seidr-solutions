print("Enter numbers separated by space:")
numbers = list(map(float, input().split()))

min_num = min(numbers)
max_num = max(numbers)
print([(x - min_num) / (max_num - min_num) for x in numbers])