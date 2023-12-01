import numpy as np

def cut_vector(vector):
    vector = np.array(vector)
    diff = np.abs(np.cumsum(vector) - np.sum(vector) / 2)
    index = np.argmin(diff)
    subvector1 = vector[:index+1]
    subvector2 = vector[index+1:]
    return subvector1, subvector2