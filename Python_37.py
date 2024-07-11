```
def merge(left, right):
    return sorted(left) + sorted(right)

def sort_even(evens):
    evens.sort()
    odd_nums = [x for x in evens if x % 2 != 0]
    sorted_evens = [x for x in evens if x % 2 == 0]
    return merge(sorted_evens, odd_nums)

evens = [2, 4, 6]
odds = [1, 3, 5]

print(sort_even(evens))