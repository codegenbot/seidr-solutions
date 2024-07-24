```
def by_length(arr):
    arr = sorted([str(x) for x in arr if 1 <= x <= 9])
    arr.reverse()
    return [name for num, name in zip(arr, ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]) if num]