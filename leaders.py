def leaders(vector):
    max_val = 0
    result = []
    for elem in vector:
        if elem >= max_val:
            result.append(elem)
            max_val = elem
    return result