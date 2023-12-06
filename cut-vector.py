import numpy as np

def cut_vector(vector):
    diff = np.abs(np.diff(vector))
    min_index = np.argmin(diff)
    return vector[:min_index], vector[min_index:]