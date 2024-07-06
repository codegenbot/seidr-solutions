def sorted_list_sum(lst):
    even_words = ["".join(filter(str.isdigit, word)) for word in lst]
    return " ".join(sorted([word for word in lst if word in even_words], key=lambda x: sum(int(digit) for digit in x)))