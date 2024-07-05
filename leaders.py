def leaders(input_vector):
    max_seen = float('inf')
    leaders = []
    for num in input_vector:
        if num >= max_seen:
            leaders.append(num)
        else:
            max_seen = num
    return leaders[::-1]