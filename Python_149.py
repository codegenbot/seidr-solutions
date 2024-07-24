def sorted_list_sum():
    lst = [word.strip().lower() for word in input("Enter words separated by spaces: ").split()]
    return "".join(sorted([word for word in lst if len(word) % 2 == 0], key=len))