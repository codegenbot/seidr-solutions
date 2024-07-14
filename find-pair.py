def find_pair(arr):
    target = int(input())
    arr.sort()
    left = 0
    right = len(arr) - 1

    while left < right:
        current_sum = arr[left] + arr[right]

        if current_sum == target:
            print(*[arr[left], arr[right]])
            return

        elif current_sum < target:
            left += 1

        else:
            right -= 1