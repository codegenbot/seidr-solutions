```
def sorted_list_sum(lst):
    even_length_words = [word for word in lst if len(word) % 2 == 0]
    even_length_words.sort(key=lambda x: (len(x), x))
    return even_length_words