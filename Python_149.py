def sorted_list_sum(lst):
    digits = [word for word in lst if word.isdigit()]
    return [" ".join(sorted(digits))]