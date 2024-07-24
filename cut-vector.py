n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
half_sum = total_sum // 2
prefix_sum = 0
idx = 0

while prefix_sum <= half_sum:
    prefix_sum += vector[idx]
    idx += 1

if prefix_sum == half_sum:
    print(vector[:idx])
    print(vector[idx:])
else:
    diff1 = abs(prefix_sum - half_sum)
    diff2 = abs(prefix_sum - vector[idx - 1] - half_sum)

    if diff1 <= diff2:
        print(vector[:idx])
        print(vector[idx:])
    else:
        print(vector[: idx - 1])
        print([vector[idx - 1]] + vector[idx:])