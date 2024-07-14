def find_pair(target):
    n = int(input())
    arr = list(map(int, input().split()))
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] + arr[j] == target:
                return f"{arr[i]} {arr[j]}"
    return "No pair found"


print(find_pair(int(input())))