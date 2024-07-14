def leaders(arr):
    max_val = arr[-1]
    leaders = [max_val]
    for num in arr[:-1]:
        if num >= max_val:
            max_val = num
            leaders.insert(0, max_val)
    return leaders