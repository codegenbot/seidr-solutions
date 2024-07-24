def sorted_list_sum(words=None):
    if words is None:
        lst = [word.strip().lower() for word in input("Enter words separated by spaces: ").split()]
    else:
        lst = [word.strip().lower() for word in words]
    return sorted([word for word in lst if len(word) % 2 == 0], key=lambda x:len(x))