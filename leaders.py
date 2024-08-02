Here is the Python solution for the problem:

def leaders(arr):
    return [x for x in arr[::-1][::-1] if all(x >= y for y in arr[arr.index(x)+1:])]

print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))