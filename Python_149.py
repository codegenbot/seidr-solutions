```
def sorted_list_sum(lst):
    even_words = [word for word in lst if len(str(word)) % 2 == 0]
    return ''.join(sorted([word for word in lst if len(word) % 2 == 0])).lower()