def sorted_list_sum(lst):
    even_count = sum(1 for word in lst if len(word) % 2 == 0)
    odd_count = len(lst) - even_count
    return sum(
        len(word) for word in sorted([word for word in lst], key=lambda x: (len(x), x))
    )