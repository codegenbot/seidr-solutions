n = int(input())
arr = [int(input()) for _ in range(n)]
total_sum = sum(arr)
half_sum = 0
for i, num in enumerate(arr):
    half_sum += num
    if half_sum * 2 >= total_sum:
        break
subvector1 = arr[: i + 1]
subvector2 = arr[i + 1 :]
print(*subvector1)
print(*subvector2)