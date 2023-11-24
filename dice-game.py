import numpy as np

n = int(input())
m = int(input())

peter = np.arange(1, n+1)
colin = np.arange(1, m+1)

total_outcomes = n * m
favorable_outcomes = np.sum(peter > colin)

probability = favorable_outcomes / total_outcomes
print(probability)