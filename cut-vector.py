
import numpy as np

def cut_vector(vector):
    # Calculate the sum of the first half of the vector
    first_half = vector[:len(vector)//2]
    first_sum = np.sum(first_half)
    
    # Calculate the sum of the second half of the vector
    second_half = vector[len(vector)//2:]
    second_sum = np.sum(second_half)
    
    # Find the index where the difference between the two sums is smallest
    min_index = np.argmin(np.abs(first_sum - second_sum))
    
    return vector[:min_index], vector[min_index:]