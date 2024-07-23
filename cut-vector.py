n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
curr_sum = 0
cut_idx = 0

for i in range(n):
    curr_sum += arr[i]
    if curr_sum >= half_sum:
        cut_idx = i
        break

subvector1 = arr[: cut_idx + 1]
subvector2 = arr[cut_idx + 1 :]

print(*subvector1)
print(*subvector2)