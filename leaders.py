def leaders(vector):
    max_right = None
    count = 0
    for i in range(len(vector)):
        if vector[i] > max_right:
            result.append(vector[i])
            count += 1
        else:
            break
    return count