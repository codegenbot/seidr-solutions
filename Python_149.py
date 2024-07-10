```
def sorted_list_sum(lst):
    even_words = sorted([(word, len(word)) for word in lst if len(word) % 2 == 0], key=lambda x: x[1])
    
    return [word for word, _ in even_words]