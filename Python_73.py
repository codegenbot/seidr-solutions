def smallest_change():
    n = int(input("Enter the number of integers: "))
    arr = list(map(int, input(f"Enter {n} space-separated integers: ").split()))

    while len(arr) != n:
        arr = list(map(int, input(f"Enter {n} space-separated integers: ").split()))
    
    arr.sort()
    left, right = 0, len(arr) - 1
    changes = 0

    while left < right:
        if arr[left] != arr[right]:
            for i in range(len(arr)-1):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            left += 1
        else:
            left, right = left + 1, right - 1

    return changes