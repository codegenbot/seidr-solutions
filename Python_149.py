def sorted_list_sum(lst):
    return " ".join(sorted([str(i) for i in lst if i.isdigit() and int(i) % 2 == 0]))