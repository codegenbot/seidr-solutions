```python
def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_difference = abs(total_sum)
    split_index = -1
    for i in range(len(vector)):
        current_sum += vector[i]
        difference = abs(current_sum - (total_sum - current_sum))
        if difference < min_difference:
            min_difference = difference
            split_index = i
    if split_index != -1:
        subvector1 = vector[:split_index]
        subvector2 = vector[split_index:]
        return subvector1, subvector2
```