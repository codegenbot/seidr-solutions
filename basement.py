def basement(arr):
    sum_so_far = 0
    for i in range(len(arr)):
        if sum_so_far + arr[i] <= 0:
            return i
        sum_so_far += arr[i]
    return -1

arr = list(map(int, input().split()))

result = basement(arr)
print(result)