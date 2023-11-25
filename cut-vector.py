import numpy as np


def cut_vector():
    vector = list(map(int, input().split()))
    diff = np.abs(np.cumsum(vector) - np.sum(vector) / 2)
    idx = np.argmin(diff)
    return list(vector[: idx + 1]), list(vector[idx + 1 :])