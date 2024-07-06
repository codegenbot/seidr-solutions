def sorted_list_sum(lst):
    even_words = [int("".join(filter(str.isdigit, word))) if "".join(filter(str.isdigit, word)).isdigit() else 0 for word in lst]
    return " ".join(sorted([str(num) for num in even_words if isinstance(num, int)]))