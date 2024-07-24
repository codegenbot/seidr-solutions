n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
current_sum = 0
cut_index = 0

for i, num in enumerate(arr):
    current_sum += num
    if current_sum >= half_sum:
        cut_index = i
        break

if abs(total_sum - 2 * current_sum) < abs(total_sum - 2 * (current_sum - num)):
    print(*arr[: cut_index + 1])
    print(*arr[cut_index + 1 :])
else:
    print(*arr[:cut_index])
    print(*arr[cut_index:])