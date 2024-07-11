```
def sorted_list_sum(lst):
    odd_length_words = [word for word in lst if len(word) % 2 != 0]
    return sorted([word for word in lst if len(word) % 2 == 0], key=lambda x: (len(x), x))