def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            for i in range(n-1):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    break
            right -= 1
        else:
            left += 1
            right -= 1
    
    return changes

coins = list(map(int, input("Enter the array of coins: ").split()))
print(smallest_change(coins))