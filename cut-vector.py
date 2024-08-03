n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = 0
idx = -1

for i in range(n):
    half_sum += arr[i]
    if half_sum * 2 >= total_sum:
        idx = i
        break

print(*arr[: idx + 1])
print(*arr[idx + 1 :])