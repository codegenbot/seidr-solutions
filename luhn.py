n = int(input())
digits = list(map(int, input().split()))

total = sum(x if i % 2 == 0 else x * 2 if x * 2 <= 9 else x * 2 - 9 for i, x in enumerate(digits))

print(total)