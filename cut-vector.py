```
def cut_vector(vector):
    vector.sort()
    for i in range(1, len(vector)):
        if vector[i] == vector[i-1]:
            return (vector[:i], vector[i:])
    left_sum = sum(vector[:-1])
    right_sum = sum(vector[-1:])
    diff = abs(left_sum - right_sum)
    return ((vector[:-1]), (vector[-1:],))