def find_leaders(arr):
    leaders = [arr[0]] if arr else []
    max_right = arr[0] if arr else None
    for i in range(1, len(arr)):
        if arr[i] > max_right:
            max_right = arr[i]
            leaders.append(max_right)
    return leaders