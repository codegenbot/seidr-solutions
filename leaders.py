def find_leaders(input_vector):
    leaders = []
    max_right = input_vector[-1]
    leaders.append(max_right)
    for i in range(len(input_vector)-2, -1, -1):
        if input_vector[i] >= max_right:
            leaders.append(input_vector[i])
            max_right = input_vector[i]
    return leaders