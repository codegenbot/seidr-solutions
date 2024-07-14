def basement(arr):
    total = 0
    for i, num in enumerate(arr):
        total += num
        if total < 0:
            return i
    return -1


# Read input from user
arr = list(map(int, input().split()))

print(basement(arr))