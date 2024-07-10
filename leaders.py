```
def leaders(arr):
    return [max(arr[i:]) for i in range(len(arr)) if max(arr[i:]) == arr[-1]]

print("Print leaders: ", leaders([0]))
print("Print leaders: ", leaders([1, 0]))
print("Print leaders: ", leaders([1, 451]))
print("Print leaders: ", leaders([2, 1000, 0]))
print("Print leaders: ", leaders([2, 0, 1000]))