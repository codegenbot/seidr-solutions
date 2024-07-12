n = int(input())
arr = []
for i in range(n):
    arr.append(int(input()))

total_sum = sum(arr)
half_sum = total_sum // 2
current_sum = 0
for i, num in enumerate(arr):
    current_sum += num
    if current_sum >= half_sum:
        if current_sum == half_sum:
            print(*arr[: i + 1])
            print(*arr[i + 1 :])
            break
        elif current_sum - half_sum < half_sum - (current_sum - num):
            print(*arr[: i + 1])
            print(*arr[i + 1 :])
            break