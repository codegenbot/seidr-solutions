n = int(input())
total = sum(max(0, num // 3 - 2) for num in range(n))
print(total)