digits = list(map(int, input().split()))
sum_digits = sum([(x * 2 - 9 if x > 4 else x * 2) if i % 2 == 1 else x for i, x in enumerate(digits)])
print(sum_digits)