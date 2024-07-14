def find_pair(n):
    arr = [int(x) for x in input().split()]
    arr.sort()
    target = int(input())
    start, end = 0, len(arr) - 1
    while start < end:
        curr_sum = arr[start] + arr[end]
        if curr_sum == target:
            return f"{arr[start]} {arr[end]}"
        elif curr_sum < target:
            start += 1
        else:
            end -= 1
    return "-1"