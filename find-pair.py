def find_pair(n, arr, target):
    for i in range(n):
        for j in range(i+1, n):
            if arr[i] + arr[j] == target:
                return (arr[i], arr[j])

n = int(input())
arr = [int(x) for x in input().split()]
target = int(input())
print(find_pair(len(arr), arr, target))