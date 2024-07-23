def sorted_list_sum(lst):
    return "The sum of the sorted list is: " + str(
        sum(sorted([i for i in lst if len(i) % 2 == 0]))
    )