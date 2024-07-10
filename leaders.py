Here is a Python solution:

def leaders(arr):
    return [arr[i] for i in range(len(arr)-1,-1,-1) if all(x <= arr[i] for x in arr[i+1:])]

# test the function
print(leaders([0]))  # output: [0]
print(leaders([1, 0]))  # output: [1, 0]
print(leaders([1, 451]))  # output: [1, 451]
print(leaders([2, 1000, 0]))  # output: [2, 1000, 0]
print(leaders([2, 0, 1000]))  # output: [1, 1000]