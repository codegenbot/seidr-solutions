def sorted_list_sum(lst):
    odd_words = sorted([word for word in lst if len(word) % 2 != 0])
    even_words = sorted([word for word in lst if len(word) % 2 == 0], key=len)
    return odd_words + even_words