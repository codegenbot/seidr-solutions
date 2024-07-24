def leaders(input):
    result = []
    max_right = max(input)
    for x in reversed(input):
        if x >= max_right:
            result.append(x)
        else:
            max_right = x
    return result[::-1]