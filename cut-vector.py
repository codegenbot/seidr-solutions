n = int(input())
vec = list(map(int, input().split()))

total_sum = sum(vec)
half_sum = total_sum // 2
curr_sum = 0
idx = 0

for i, num in enumerate(vec):
    curr_sum += num
    if curr_sum >= half_sum:
        idx = i
        break

if curr_sum - half_sum < half_sum - (curr_sum - num):
    print(vec[: idx + 1])
    print(vec[idx + 1 :])
else:
    print(vec[:idx])
    print(vec[idx:])