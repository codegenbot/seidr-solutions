
def leaders(vector):
    result = []
    max_right = None
    count = 0
    for i in range(len(vector)):
        if vector[i+1:]:
            max_right = max(vector[i+1:], default=None)
        if vector[i] > max_right:
            result.append(vector[i])
            count += 1
    return count