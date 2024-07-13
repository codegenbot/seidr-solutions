import numpy as np


def basement(input_vector):
    return (
        len(np.where(np.cumsum(input_vector) < 0)[0])
        if any(np.cumsum(input_vector) < 0)
        else -1
    )