```
def smallest_change():
    while True:
        try:
            arr = list(map(int, input("Enter coin amounts separated by spaces: ").split()))
            if len(arr) > 1 and all(isinstance(x, int) for x in arr):
                break
            else:
                print("Invalid input. Please enter numbers separated by spaces.")
    changes = 0
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
            changes += 1
    return changes


print(smallest_change())