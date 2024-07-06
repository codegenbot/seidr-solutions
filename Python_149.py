```
def sorted_list_sum(lst):
    even_words = [word for word in lst if any(c.isdigit() and int(c) % 2 == 0 for c in word)]
    return " ".join(sorted(even_words, key=sum, reverse=True))