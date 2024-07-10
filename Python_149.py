def sorted_list_sum(lst):
    even_words = sorted([word for word in lst if len(word) % 2 == 0])

    return sum(even_words)