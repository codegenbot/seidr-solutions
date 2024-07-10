def sorted_list_sum(lst):
    even_words = [word for word in lst if len(word) % 2 == 0]
    return ' '.join(sorted(even_words)) if even_words else ''