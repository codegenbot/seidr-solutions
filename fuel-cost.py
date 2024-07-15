n = int(input())
total = 0
for x_input in input().split():
    x = int(x_input)
    total += max(0, x // 3 - 2)
print(total)