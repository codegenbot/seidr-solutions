```
def basement(input_vector):
    for i in range(len(input_vector)):
        total = sum(input_vector[:i+1])
        if total < 0:
            return i
    return -1