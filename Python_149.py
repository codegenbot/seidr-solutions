def sorted_list_sum(lst):
    total = sum(int(len(str(word))) for word in lst)
    return str(total)