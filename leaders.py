```
def leaders(vector):
    return [vector[i] for i in range(len(vector) - 1, -1, -1) if all(vector[j] <= vector[i] for j in range(i + 1, len(vector)))]