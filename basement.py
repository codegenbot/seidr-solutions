def basement(arr):
    total_sum = 0
    for i, num in enumerate(arr):
        total_sum += num
        if total_sum < 0:
            return i
    return -1

arr = list(map(int, input().split()))
print(basement(arr))