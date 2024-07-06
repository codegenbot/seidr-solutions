def sorted_list_sum(lst):
    even_words = [word for word in lst if len(str(word)) % 2 == 0]
    return sorted(int("".join(filter(str.isdigit, str(word)))) if "".join(filter(str.isdigit, str(word))).isdigit() else int(word) for word in even_words)