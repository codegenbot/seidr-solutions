import heapq
def sorted_list_sum(words=None):
    if words is None:
        lst = [word.strip().lower() for word in input("Enter words separated by spaces: ").split()]
    else:
        lst = [word.strip().lower() for word in words]
    return [word for word in sorted((i, word) for i, word in enumerate(lst) if len(word) % 2 == 0), key=lambda x: (x[1], x[0])]