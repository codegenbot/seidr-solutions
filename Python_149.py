def sorted_list_sum(lst):
    even_words = [word for word in lst if len(word) % 2 == 0]
    even_words.sort(key=lambda x: (len(x), x))
    return sum(len(word) for word in even_words)