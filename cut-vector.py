import numpy as np

def cut_vector(vector):
    vector = np.array(vector)
    diff = np.abs(np.diff(vector))
    min_diff_index = np.argmin(diff)
    return vector[:min_diff_index+1], vector[min_diff_index+1:]