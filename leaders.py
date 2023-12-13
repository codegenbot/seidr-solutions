def find_leaders(input_vector):
    vector = list(map(int, input_vector.strip().split()))
    leaders = []
    max_right = vector[-1]
    for i in reversed(range(len(vector)-1)):
        if vector[i] >= max_right:
            leaders.append(vector[i])
            max_right = vector[i]
    return [max_right] + list(reversed([x for x in leaders if x != max_right]))