def find_leaders(input_vector):
    leaders = []
    max_right = input_vector[-1]
    for i in reversed(range(len(input_vector)-1)):
        if input_vector[i] >= max_right:
            leaders.append(input_vector[i])
            max_right = input_vector[i]
    return leaders[::-1]