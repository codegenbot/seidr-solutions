import numpy as np

def cut_vector(vector):
    vector = np.array(vector)
    idx = np.argmin(np.abs(np.cumsum(vector) - np.sum(vector)/2))
    subvector1 = vector[:idx+1]
    subvector2 = vector[idx+1:]
    return list(subvector1), list(subvector2)