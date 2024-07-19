```python
def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)+1):  
        if i == 1 and sum(vector[:i]) == sum(vector[i:]):
            return vector[:i], vector[i:]
        diff = sum(vector[:i]) - sum(vector[i:])
        if diff < 0:
            diff *= -1
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]