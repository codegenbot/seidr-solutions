def leaders(input_vector):
    leaders = [input_vector[-1]]  # rightmost element is always a leader
    for i in reversed(range(len(input_vector) - 1)):
        if input_vector[i] >= input_vector[i + 1]:
            leaders.append(input_vector[i])
    return leaders[::-1]