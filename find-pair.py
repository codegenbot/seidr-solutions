def find_pair(n):
    arr = [int(x) for x in input().split()]
    target = int(input())
    arr.sort()
    left, right = 0, len(arr) - 1
    while left < right:
        current_sum = arr[left] + arr[right]
        if current_sum == target:
            return f"{arr[left]} {arr[right]}"
        elif current_sum < target:
            left += 1
        else:
            right -= 1
    return "-1"