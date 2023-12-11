
import numpy as np

def find_pair(vector, target):
    for i in range(len(vector)):
        for j in range(i+1, len(vector)):
            if vector[i] + vector[j] == target:
                return [vector[i], vector[j]]
    return []