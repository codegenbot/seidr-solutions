def leaders(vector):
    result = []
    for i in range(len(vector)):
        # Check if the element is a leader by comparing it to the maximum value to its right
        max_right = max(vector[i + 1 :], default=vector[-1])
        if vector[i] >= max_right:
            result.append(vector[i])
    return result