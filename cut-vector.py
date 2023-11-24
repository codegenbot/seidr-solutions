import numpy as np

def cut_vector(vector):
    index = np.argmin(np.abs(np.cumsum(vector) - np.sum(vector)//2))
    subvector1 = vector[:index+1]
    subvector2 = vector[index+1:]
    return subvector1, subvector2