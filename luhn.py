n = int(input())
digits = list(map(int, input().split()))

for i in range(1, n, 2):
    digits[i] *= 2
    if digits[i] > 9:
        digits[i] -= 9

total_sum = sum(digits)
print(total_sum)