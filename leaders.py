def leaders(arr):
    return [x for i, x in enumerate(reversed(arr)) if all(x >= y for y in arr[i + 1 :])]


# Test cases
print(leaders([0]))  # [0]
print(leaders([1, 0]))  # [1, 0]
print(leaders([1, 451]))  # [1, 451]
print(leaders([2, 1000, 0]))  # [2, 1000, 0]
print(leaders([2, 0, 1000]))  # [1, 1000]