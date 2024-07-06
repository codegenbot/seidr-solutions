def sorted_list_sum(lst):
    even_words = [word for word in lst if "".join(filter(str.isdigit, word))]
    odd_words = [word for word in lst if word not in even_words]
    
    return " ".join(sorted(even_words, key=lambda x: int("".join(filter(str.isdigit, x)))) + sorted(odd_words))