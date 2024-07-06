def sorted_list_sum(lst):
    return sum(int(x) for x in sorted([int(word) for word in lst if len(str(int(word))) % 2 == 0], key=lambda x: (len(str(x)), x)))