def leaders(vector):
    max_value = -1
    result = []
    left = 0
    right = len(vector) - 1
    while left < right:
        if vector[right] >= max_value:
            max_value = vector[right]
            result.append(max_value)
        elif vector[left] >= max_value:
            max_value = vector[left]
            result.append(max_value)
        left += 1
        right -= 1
    return result