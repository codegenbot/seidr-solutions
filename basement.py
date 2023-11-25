def basement(arr):
    sum_so_far = 0
    for i in range(len(arr)):
        sum_so_far += arr[i]
        if sum_so_far < 0:
            return i
    return -1


n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

result = basement(arr)
print(result)