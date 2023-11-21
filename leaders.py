def find_leaders(arr):
    leaders = [arr[-1]]
    max_right = arr[-1]
    for num in arr[-2::-1]:
        if num >= max_right:
            max_right = num
            leaders.append(num)
    return list(reversed(leaders))