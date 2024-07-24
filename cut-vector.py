n = int(input())
data = [int(input()) for _ in range(n)]

total_sum = sum(data)
half_sum = total_sum // 2

current_sum = 0
for i, num in enumerate(data):
    current_sum += num
    if current_sum >= half_sum:
        break

if current_sum == half_sum:
    print(data[: i + 1])
    print(data[i + 1 :])
else:
    if current_sum - half_sum < total_sum - current_sum:
        print(data[: i + 1])
        print(data[i + 1 :])
    else:
        print(data[:i])
        print(data[i:])