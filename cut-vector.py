```
def cut_vector(vector):
    for i in range(1, len(vector)):
        if sum(vector[:i]) == sum(vector[i:]):
            return vector[:i], vector[i:]
        elif abs(sum(vector[:i]) - sum(vector[i:])) < abs(sum(vector[:i-1]) - sum(vector[i+1:])):
            return vector[:i], vector[i:]
    return [vector[0]], vector[1:]