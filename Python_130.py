def tri(n):
    arr = [3]
    for i in range(1, n + 1):
        if i % 2 == 0:
            arr.append(1 + i // 2)
        else:
            arr.append(arr[i - 1] + arr[i - 2] + arr[i + 1])
    return arr