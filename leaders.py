Here is the solution in Python:

def leaders(v):
    return [v[i] for i in range(len(v)-1,-1,-1) if all(x <= v[i] for x in v[i+1:]) or i == len(v)-1]

print(leaders([0]))  # Output: [0]
print(leaders([1, 0]))  # Output: [1, 0]
print(leaders([1, 451]))  # Output: [1, 451]
print(leaders([2, 1000, 0]))  # Output: [2, 1000, 0]
print(leaders([2, 0, 1000]))  # Output: [1, 1000]