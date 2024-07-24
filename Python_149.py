def sorted_list_sum(words):
    lst = [word.strip().lower() for word in words.split()]
    return "".join(sorted([word for word in lst if len(word) % 2 == 0], key=len))