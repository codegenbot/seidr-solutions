def leaders(vector):
    n = len(vector)
    leaders_vector = [vector[n - 1]]

    for i in range(n - 2, -1, -1):
        if vector[i] >= vector[n - 1]:
            leaders_vector.append(vector[i])
            break
        elif i == 0 or vector[i - 1] < vector[i]:
            leaders_vector.append(vector[i])

    return leaders_vector[::-1]