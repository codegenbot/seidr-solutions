```
def sorted_list_sum(lst):
    even_words = [word for word in lst if len(word) % 2 == 0]
    even_lengths_sum = sum(len(word) for word in even_words)
    return ",".join(sorted(lst, key=len))