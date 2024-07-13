def smallest_change(arr):
    if not all(i.isdigit() for i in ' '.join(map(str, arr)).split()):
        return
    n = len(arr)
    try:
        arr = list(map(int, ' '.join(map(str, arr)).split()))
        arr.sort()
    except Exception as e:
        return str(e)

    changes = 0
    if len(set(arr)) > 1: 
        for i in range(n):
            while arr[i] != arr[0]:
                arr[i], arr[0] = arr[0], arr[i]
                changes += 1

    else:
        return n - 1

    return changes