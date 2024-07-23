def sorted_list_sum(lst):
    even_strings = [i for i in lst if len(i) % 2 == 0]
    return sum(len(x) for x in sorted(even_strings))