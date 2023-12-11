def leaders(vec):
    res = []
    for i in range(len(vec)-1, -1, -1):
        if vec[i] >= max(vec[i+1:]):
            res.append(vec[i])
    return res[::-1]