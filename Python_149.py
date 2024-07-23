def sorted_list_sum(lst):
    even_length_strs = [i for i in lst if len(i) % 2 == 0]
    return sum(int(i) for i in sorted(even_length_strs))