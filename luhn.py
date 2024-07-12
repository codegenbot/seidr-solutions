_ = input()
digits = list(map(int, input().split()))
total = sum((x * 2 - 9) if x > 4 else x * 2 for x in digits[1::2])
print(total)