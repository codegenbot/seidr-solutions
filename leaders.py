def leaders(integers):
    result = []
    max_right = integers[-1]
    for i in range(len(integers) - 1, -1, -1):
        if integers[i] >= max_right:
            result.append(integers[i])
            max_right = integers[i]
    return list(reversed(result))