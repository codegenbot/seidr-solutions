total = sum((num // 3) for num in map(int, input().split())) - 2 * len(input().split())
print(total)