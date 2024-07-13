n = int(input())
digits = list(map(int, input().split()))
s = 0
for i in range(15, -1, -1):
    if (i + 1) % 2 == 0:
        double = digits[i] * 2
        s += double if double <= 9 else double - 9
    else:
        s += digits[i]
print(s)