```
def cut_vector(vector):
    differences = [abs(vector[i] - vector[i+1]) for i in range(len(vector)-1)]
    min_diff = min(differences)
    if min_diff == 0:
        return vector, []
    else:
        cut_index = differences.index(min_diff)
        return vector[:cut_index], vector[cut_index:]
```