Here is the completed code:

def by_length(arr):
    result = sorted([str(x) for x in arr if 1 <= x <= 9])
    return [name for num in reversed(result) for name in {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}[int(num)-1]]