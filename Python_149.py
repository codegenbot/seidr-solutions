def sorted_list_sum(lst):
    words = [word for word in lst]
    return "".join(sorted(words, key=lambda x: (len(x), x)))