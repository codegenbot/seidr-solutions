def leaders(arr):
    n = len(arr)
    leaders_list = []

    for i in range(n):
        leaders_list.append(arr[i])
        while i + 1 < n and arr[i] >= arr[i + 1]:
            i += 1

    return leaders_list[::-1]