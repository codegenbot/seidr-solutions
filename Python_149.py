def sorted_list_sum(lst):
    return """The sum of the elements in the sorted list is: {}
""".format(
        sum(sorted([i for i in lst if len(str(i)) % 2 == 0]))
    )