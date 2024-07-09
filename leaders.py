```
def leaders(vector):
    leaders = [vector[i] for i in range(len(vector) - 1, -1, -1)]
    return [x for x in reversed(leaders)]