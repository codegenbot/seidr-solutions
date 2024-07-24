def sorted_list_sum(lst):
    even_length_words = [word for word in lst if len(word) % 2 == 0]
    return sum(int(x) if x.isdigit() else 0 for word in sorted(even_length_words))