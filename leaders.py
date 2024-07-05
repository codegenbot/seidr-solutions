```
def leaders(input_vector):
    leaders = []
    max_seen = float('inf')
    max_right = 0
    for i in range(len(input_vector)-1, -1, -1):
        if input_vector[i] >= max_right:
            leaders.append(input_vector[i])
            max_right = input_vector[i]
        else:
            max_right = max_seen
        max_seen = min(max_seen, input_vector[i])
    return leaders