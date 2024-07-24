def sorted_list_sum(words=None):
    if words is None:
        lst = [
            word.strip().lower()
            for word in input("Enter words separated by spaces: ").split()
        ]
    else:
        lst = [word.strip().lower() for word in words]

    return [x[1] for x in sorted([(sum(ord(c) for c in word), word) for word in lst])]