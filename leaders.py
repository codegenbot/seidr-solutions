Here is the Python solution:

def leaders(v):
    return [v[i] for i in range(len(v)-1,-1,-1) if all(x <= v[i] for x in v[i+1:])]

# test cases
print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))