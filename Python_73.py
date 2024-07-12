def smallest_change():
    n = int(input("Enter the number of elements in the array: "))
    arr = list(map(int, input("Enter {} space separated numbers: ".format(n)).split()))

    changes = 0

    left, right = 0, len(arr) - 1
    while left < right:
        if arr[left] != arr[right]:
            for i in range(left + 1, right):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            else:
                changes += 2
        left += 1
        right -= 1

    return changes


print(smallest_change())