def sorted_list_sum(words=None):
    if words is None:
        words = [word.strip().lower() for word in input("Enter words separated by spaces: ").split()]
    return "".join(sorted([word for word in words if len(word) % 2 == 0], key=len))