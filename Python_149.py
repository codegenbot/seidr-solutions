def sorted_list_sum(lst):
    even_length_words = [word for word in lst if len(word) % 2 == 0]
    return [x for y in sorted([(len(x), x) for x in even_length_words]) for x in y][0]