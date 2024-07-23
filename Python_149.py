def sorted_list_sum(lst):
    return "The sum of the sorted list is: " + str(sum(sorted([int(i) for i in lst if isinstance(i, int)])))