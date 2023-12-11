def leaders(vec):
    result = []
    for i in range(len(vec)):
        if vec[i] >= max(vec[i+1:]):
            result.append(vec[i])
    return result