def find_pair(n, arr):
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] + arr[j] == int(input()):
                return f"{arr[i]} {arr[j]}"