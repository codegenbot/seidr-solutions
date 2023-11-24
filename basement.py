def basement(arr):
    prefix_sum = 0
    for i in range(len(arr)):
        prefix_sum += arr[i]
        if prefix_sum < 0:
            return i
    return -1


n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

result = basement(arr)
print(result)