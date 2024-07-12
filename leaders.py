```
def leaders(input_vector):
    leaders = []
    max_leader = input_vector[-1]
    for num in reversed(input_vector[:-1]):
        if num < max_leader:
            leaders.append(max_leader)
            max_leader = num
    leaders.append(max_leader)  
    return list(reversed(leaders))