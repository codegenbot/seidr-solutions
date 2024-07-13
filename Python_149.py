def sorted_list_sum(lst):
    return sum(
        len(word) for word in sorted([word for word in lst], key=lambda x: (len(x), x))
    )