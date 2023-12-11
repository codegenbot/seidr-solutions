```python
def cut_vector(vector):
    sorted_vector = sorted(vector)
    cut_index = next((i for i, x in enumerate(sorted_vector[1:]) if x != sorted_vector[i]), len(sorted_vector))
    left_subvector = sorted_vector[:cut_index]
    right_subvector = sorted_vector[cut_index:]
    return left_subvector, right_subvector
```