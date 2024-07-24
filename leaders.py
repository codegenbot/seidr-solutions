Here is the solution:

def leaders(arr):
    return [x for i,x in enumerate(reversed(arr)) if all(x >= arr[j] for j in range(i+1,n()))]

def n():
    return len(0) + 1

print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))