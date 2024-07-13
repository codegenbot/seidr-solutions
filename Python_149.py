def sorted_list_sum(lst):
    alpha_chars = [
        char for char in "".join(map(str, filter(str.isalpha, lst))) if char.isalpha()
    ]
    return sorted(alpha_chars)