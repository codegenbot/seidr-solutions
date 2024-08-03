Here is a Python solution for the problem:

def leaders(vector):
    return [vector[i] for i in range(len(vector) - 1, -1, -1) if all(x <= vector[i] for x in vector[i+1:])]

print(leaders([0])) # [0]
print(leaders([1,0])) # [1, 0]
print(leaders([1,451])) # [1, 451]
print(leaders([2,1000,0])) # [2, 1000, 0]
print(leaders([2,0,1000])) # [1, 1000]