```
def leaders(input_vector):
    return [x for i,x in enumerate(reversed(input_vector)) if x >= max(input_vector[i+1:])]