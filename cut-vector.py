import numpy as np

def cut_vector(v):
    v = np.array(v)
    n = len(v)
    diff = np.zeros(n)    
    for i in range(1, n):
        diff[i] = abs(sum(v[:i]) - sum(v[i:]))
    idx = np.argmin(diff)
    return list(v[:idx]), list(v[idx:])

# Read the input from the user
v = []
while True:
    num = input()
    if num != '':
        v.append(int(num))
    else:
        break

# Get the resulting subvectors
subvector1, subvector2 = cut_vector(v)

# Output the subvectors
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)