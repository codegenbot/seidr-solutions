def find_pair(n):
    arr = [int(x) for x in input().split()]
    target = int(input())
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] + arr[j] == target:
                return f"{arr[i]} {arr[j]}"