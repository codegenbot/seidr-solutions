def leaders(arr):
    n = len(arr)
    leaders_list = []

    for i in range(n - 1, -1, -1):
        leaders_list.append(arr[i] if any(x < arr[i] for x in arr[i + 1 :]) else 0)

    return [x for x in reversed(leaders_list) if x > 0]