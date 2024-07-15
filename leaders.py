def leaders():
    input_vector = list(map(int, input("Enter a vector of positive integers: ").split()))
    leader = [input_vector[-1]]
    max_right = input_vector[-1]
    for i in range(len(input_vector) - 2, -1, -1):
        if input_vector[i] >= max_right:
            leader.append(input_vector[i])
            max_right = input_vector[i]
    return leader

print(leaders())