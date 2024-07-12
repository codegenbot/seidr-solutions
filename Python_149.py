def sorted_list_sum(lst):
    even_words = [word for word in lst if len(word) % 2 == 0]
    even_lengths = [len(word) for word in even_words]
    sum_lengths = sum(even_lengths)
    return str(sum_lengths)