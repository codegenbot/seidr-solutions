numbers = list(map(int, input().split()))
result = []
max_num = float("-inf")
for num in numbers:
    max_num = max(max_num, num)
    result.append(max_num)
print(result)