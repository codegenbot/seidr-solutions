def find_leaders(arr):
    leaders = []
    max_right = float('-inf')
    for num in arr[::-1]:
        if num >= max_right:
            max_right = num
            leaders.append(num)
    return leaders[::-1]