def leaders(vector):
    return [
        vector[i]
        for i in range(len(vector) - 1, -1, -1)
        if all(x <= vector[i] for x in vector[i + 1 :])
    ]