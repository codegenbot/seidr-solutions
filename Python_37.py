```
def merge(lst1, lst2):
    return [i for i in sorted([i for sublst in [lst1, lst2] for i in sublst])]

def sort_even(evens):
    return merge(evens, [])

evens = [2, 4, 6]
odds = [1, 3, 5]

print(sort_even(evens))