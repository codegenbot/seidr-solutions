```
def leaders(arr):
    return [max(arr[i:]) for i in range(len(arr)) if max(arr[i:]) == arr[-1]]

print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))