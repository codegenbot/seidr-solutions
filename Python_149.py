def sorted_list_sum(lst):
    even_length_words = [word for word in lst if len(word) % 2 == 0]
    return sorted(even_length_words)