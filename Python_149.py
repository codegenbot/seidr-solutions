def sorted_list_sum(words=None):
    if words is None:
        lst = [word.strip().lower() for word in input("Enter words separated by spaces: ").split()]
    else:
        lst = [word.strip().lower() for word in words]
    return sum([int(''.join(c for c in word)) for word in sorted(lst) if len(word) % 2 == 0])