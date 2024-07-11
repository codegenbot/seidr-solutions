```python
def merge(left, right):
    return left + right

def sort_even(evens):
    return merge(sorted([x for x in evens if x % 2 == 0]), [])

evens = [2, 4, 6]
odds = [1, 3, 5]

print(sort_even(evens))