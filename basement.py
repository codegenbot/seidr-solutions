def basement(arr):
    total_sum = 0
    for i in range(len(arr)):
        total_sum += arr[i]
        if total_sum < 0:
            return i
    return -1


n = int(input())
arr = list(map(int, input().split()))

result = basement(arr)
print(result)