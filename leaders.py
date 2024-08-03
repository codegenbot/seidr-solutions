def leaders(input_vector):
    leaders_vector = [input_vector[-1]]

    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= input_vector[-1]:
            leaders_vector.append(input_vector[i])
            input_vector.pop()
        else:
            break

    return list(reversed(leaders_vector))