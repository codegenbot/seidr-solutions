```
def leaders(arr):
    return [max(arr[i:]) for i in range(len(arr))]

print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))