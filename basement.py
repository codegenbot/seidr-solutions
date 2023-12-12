def basement(arr):
    sum = 0
    for i in range(len(arr)):
        sum += arr[i]
        if sum < 0:
            return i
    return -1

arr = list(map(int, input().split()))
print(basement(arr))