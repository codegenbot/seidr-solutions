```Python
def sort_third(lst):
    lst = [(1, 2, 'apple'), (4, 3, 'banana'), (7, 5, 'cherry')]
    sorted_lst = [x[2] for x in sorted(lst, key=lambda x: x[2])]
    return tuple(sorted_lst)

print(sort_third())