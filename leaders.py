def find_leaders(arr):
    leaders = []
    max_right = arr[-1]
    for num in arr[::-1]:
        if num >= max_right:
            max_right = num
            leaders.insert(0, max_right)
    return leaders