def leaders(input_vector):
    leaders = []
    max_leader = input_vector[-1]
    for num in input_vector:
        if num >= max_leader:
            leaders.append(max_leader)
            max_leader = num
    return leaders