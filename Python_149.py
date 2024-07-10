def sorted_list_sum(lst):
    return sum(
        int(x)
        for x in sorted(
            set([word for word in lst if len(word) % 2 == 0]), key=lambda x: (len(x), x)
        )
    )