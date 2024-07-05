def leaders(input_vector):
    leaders = [input_vector[-1]]
    max_right = input_vector[-1]
    for i in range(len(input_vector)-1, 0, -1):
        if input_vector[i-1] < max_right:
            break
        if input_vector[i-1] >= max_right:
            leaders.append(input_vector[i-1])
            max_right = input_vector[i-1]
    return leaders[::-1]