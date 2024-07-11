input_length = int(input())
digits = list(map(int, input().split()))

for i in range(1, input_length, 2):
    digits[i] *= 2
    if digits[i] > 9:
        digits[i] -= 9

print(sum(digits))