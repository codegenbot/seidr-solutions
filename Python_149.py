def sorted_list_sum(lst):
    even_words = [word for word in lst if len(str(word)) % 2 == 0]
    return sum(int(''.join(filter(str.isdigit, word))) or 0 for word in sorted(even_words))