
def sorted_list_sum(lst):
    if len(lst) < 2:
        return lst
    even_words = [word for word in lst if len(word) % 2 == 0]
    odd_words = [word for word in lst if len(word) % 2 != 0]
    return sorted(even_words, key=len) + sorted(odd_words, key=len)