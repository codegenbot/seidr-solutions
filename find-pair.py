n = int(input())
arr = list(map(int, input().split()))
target = int(input())

for i in range(n):
    for j in range(i + 1, n):
        if arr[i] + arr[j] == target:
            print(arr[i])
            print(arr[j])