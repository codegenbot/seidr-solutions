def leaders(arr):
    max_right = arr[-1]
    leaders = [max_right]

    for num in arr[:-1][::-1]:
        if num >= max_right:
            leaders.append(num)
            max_right = num

    return leaders[::-1]