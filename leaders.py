def leaders(input_vector):
    left = right = len(input_vector) - 1
    leaders = [input_vector[right]]
    for _ in range(len(input_vector) - 1, 0, -1):
        while input_vector[left] < input_vector[right]:
            right -= 1
        leaders.append(input_vector[right])
        left = right
        right -= 1
    return leaders