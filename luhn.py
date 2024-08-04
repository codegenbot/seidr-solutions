n = int(input())
digits = list(map(int, input().split()))
result = sum(
    [(x * 2 - 9) if x * 2 > 9 else x * 2 for i, x in enumerate(digits) if i % 2 == 1]
) + sum([x for i, x in enumerate(digits) if i % 2 == 0])
print(result)