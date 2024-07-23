n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = 0
for i, num in enumerate(arr):
    half_sum += num
    if half_sum >= total_sum / 2:
        if half_sum == total_sum / 2:
            print(*arr[: i + 1])
            print(*arr[i + 1 :])
        else:
            if abs(total_sum - 2 * half_sum) < abs(total_sum - 2 * (half_sum - num)):
                print(*arr[: i + 1])
                print(*arr[i + 1 :])
            else:
                print(*arr[:i])
                print(*arr[i:])
        break