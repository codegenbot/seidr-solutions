def sorted_list_sum(lst):
    all_words = sorted(lst, key=len)
    even_words = [word for word in all_words if len(word) % 2 == 0]
    odd_words = [word for word in all_words if len(word) % 2 != 0]
    return sorted(even_words, key=len) + sorted(odd_words, key=len)