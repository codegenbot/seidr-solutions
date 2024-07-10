def find_leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max(arr[i + 1 :]):
            leaders.insert(0, arr[i])
    return leaders


# Read the input from the user
n = int(input())
arr = list(map(int, input().split()))

print(*find_leaders(arr))