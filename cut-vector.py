```
def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []
    
    left = vector[0]
    right = sum(vector[1:])
    for i in range(1, len(vector)):
        new_left = left + vector[i-1]
        new_right = right - vector[i]
        if abs(new_left - new_right) <= min(abs(left-right), abs(left-new_left), abs(right-new_right)):
            return vector[:i+1], vector[i:]
    return [vector[0]], vector[1:]