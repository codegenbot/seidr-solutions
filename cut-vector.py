n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
running_sum = 0
cut_index = 0

for i, num in enumerate(arr):
    running_sum += num
    if running_sum >= half_sum:
        cut_index = i
        break

subvector1 = arr[: cut_index + 1]
subvector2 = arr[cut_index + 1 :]

print(*subvector1)
print(*subvector2)