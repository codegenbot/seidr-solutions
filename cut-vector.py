import numpy as np
def cut_vector(vector):
    # find the index where the difference between the two sides is minimum
    diff = np.abs(np.diff(vector))
    min_index = np.argmin(diff)

    # return the two subvectors
    return vector[:min_index], vector[min_index:]