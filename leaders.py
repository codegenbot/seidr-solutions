Here is the Python solution for the problem:

def leaders(arr):
    leaders = [arr[i] for i in range(len(arr)-1, -1, -1) if all(arr[i] >= x for x in arr[i+1:])]
    return leaders[::-1]

print(leaders([0])) 
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))