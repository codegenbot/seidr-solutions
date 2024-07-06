def sorted_list_sum(lst):
    even_words = [int("".join(filter(str.isdigit, word))) if "".join(filter(str.isdigit, word)).isdigit() else 0 for word in lst]
    return sum(sorted(map(str, set(even_words))))