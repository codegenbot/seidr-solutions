Here is the Python solution for the problem:

def leaders(a):
    return [a[i] for i in range(len(a)-1,-1,-1) if all(x <= a[i] for x in a[i+1:])]

print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))