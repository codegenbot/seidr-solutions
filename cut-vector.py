```
def cut_vector(vector):
    for i in range(len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])
        if abs(left_sum - right_sum) < min(abs(left_sum), abs(right_sum)):
            return [vector[:i+1], vector[i+1:]]
    return [vector, []]


print(cut_vector([4, 634, 3894, 4247, 3749]))