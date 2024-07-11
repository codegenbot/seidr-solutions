n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
half_sum = total_sum // 2
current_sum = 0
idx = 0
for i, num in enumerate(vec):
    current_sum += num
    if current_sum >= half_sum:
        idx = i
        break

if abs(total_sum - 2 * current_sum) < abs(total_sum - 2 * (current_sum - vec[idx])):
    print(vec[: idx + 1])
    print(vec[idx + 1 :])
else:
    print(vec[:idx])
    print(vec[idx:])