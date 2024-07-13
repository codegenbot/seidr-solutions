def cut_vector(vector):
    min_diff = float("inf")
    for i in range(len(vector) - 1):
        diff = vector[i + 1] - vector[i]
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    # Check and update the split index until the parts are in increasing order
    while (split_index > 0 and vector[split_index] <= vector[split_index - 1]) or \
          (split_index < len(vector) - 1 and vector[split_index + 1] <= vector[split_index]):
        if split_index > 0:
            split_index -= 1
        else:
            split_index += 1
    
    return (
        vector[:split_index + 1],
        vector[split_index:]
    )