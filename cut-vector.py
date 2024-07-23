n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
curr_sum = 0
idx = 0

for i in range(n):
    curr_sum += v[i]
    if curr_sum >= half_sum:
        idx = i
        break

if curr_sum == half_sum:
    print(v[: idx + 1])
    print(v[idx + 1 :])
else:
    if abs(curr_sum - half_sum) < abs(curr_sum - v[idx] - half_sum):
        print(v[: idx + 1])
        print(v[idx + 1 :])
    else:
        print(v[:idx])
        print(v[idx:])