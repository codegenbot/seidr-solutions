def leaders(input_vector):
    leaders = []
    max_leader = input_vector[-1]
    for num in input_vector:
        if num >= max_leader:
            leaders.append(num)
            max_leader = num
    return list(reversed(leaders))