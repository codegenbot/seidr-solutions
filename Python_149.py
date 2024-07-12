def sorted_list_sum(lst):
    return sum(
        [
            word
            for word in sorted(
                [(len(word), word) for word in lst if len(word) % 2 == 0], reverse=True
            )
        ]
    )