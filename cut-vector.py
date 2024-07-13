```
def cut_vector(vector):
    for i in range(len(vector)):
        if sum(vector[:i+1]) == sum(vector[i:]):
            return [vector[:i+1], vector[i:]]
        elif sum(vector[:i+1]) > sum(vector[i:]):
            continue
        else:
            break
    return [vector[:len(vector)//2], vector[len(vector)//2:]]