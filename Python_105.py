Here is the completed code:

def by_length(arr):
    return [naming(i) for i in sorted([i for i in arr if 1 <= i <= 9])][::-1]

def naming(i):
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return names[i-1]