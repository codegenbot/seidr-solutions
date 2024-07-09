Here is the completed code:

def by_length(arr):
    result = sorted([str(i) for i in arr if 1 <= i <= 9])
    result.reverse()
    return [name for num in result for name in {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}[int(num)-1]]