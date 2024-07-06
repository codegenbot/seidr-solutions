def sorted_list_sum(lst):
    even_words = [word for word in lst]
    odd_words = [word for word in lst if len(word) % 2 == 1]
    return (sorted(even_words, key=len), sorted(odd_words, key=len))