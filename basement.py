def basement(arr):
    sum = 0
    for i in range(len(arr)):
        sum += arr[i]
        if sum < 0:
            return i
    return -1


n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

print(basement(arr))