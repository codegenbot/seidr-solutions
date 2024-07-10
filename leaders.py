```
def leaders(arr):
    leaders = [max(arr[i:]) for i in range(len(arr))]
    max_val = max(arr)
    result = [val for val in reversed(arr) if val >= max_val]
    return list(reversed(result))

print(leaders([0]))  
print(leaders([1, 0])) 
print(leaders([1, 451])) 
print(leaders([2, 1000, 0])) 
print(leaders([2, 0, 1000]))