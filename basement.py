def basement(vector):
    # Initialize variables
    sum = 0
    index = -1

    # Iterate through vector
    for i in range(len(vector)):
        # Update sum and index
        sum += vector[i]
        if sum < 0:
            index = i
            break

    return index