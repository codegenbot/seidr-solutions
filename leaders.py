def leaders(arr):
    leader = [arr[i] for i in range(len(arr) - 1, -1, -1)]
    result = []
    max_right = leader[0]
    for num in leader:
        if num >= max_right:
            result.append(num)
            max_right = num
    return result[::-1]