n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2

curr_sum = 0
for i, num in enumerate(arr):
    curr_sum += num
    if curr_sum >= half_sum:
        if curr_sum - half_sum <= total_sum - curr_sum:
            print(arr[: i + 1])
            print(arr[i + 1 :])
        else:
            print(arr[:i])
            print(arr[i:])
        break
else:
    print(arr)
    print([0])