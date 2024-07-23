import itertools


def basement(vector):
    for i, s in enumerate(itertools.cumsum(vector)):
        if s < 0:
            return i
    return -1