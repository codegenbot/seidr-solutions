n = int(input())
vals = [int(input()) for _ in range(n)]

total_sum = sum(vals)
half_sum = total_sum // 2
sub_sum = 0
idx = 0
for i, val in enumerate(vals):
    sub_sum += val
    if sub_sum >= half_sum:
        idx = i
        break

print(vals[: idx + 1])
print(vals[idx + 1 :])