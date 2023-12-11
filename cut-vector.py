```
import numpy as np

def cut_vector(vector):
    # Find the index where the difference between the left and right sides is minimum
    min_diff = np.inf
    min_index = 0
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            min_index = i
    
    # Return the two subvectors
    return vector[:min_index], vector[min_index:]
```