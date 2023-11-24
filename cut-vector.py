import numpy as np

def cut_vector(vector):
    vector = np.array(vector)
    diff = np.abs(np.cumsum(vector) - np.sum(vector) / 2)
    idx = np.argmin(diff)
    return list(vector[:idx+1]), list(vector[idx+1:])