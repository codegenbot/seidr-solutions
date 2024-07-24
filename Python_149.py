def sorted_list_sum(words=None):
    if words is None:
        lst = [
            int(word.strip())
            for word in input("Enter integers separated by spaces: ").split()
        ]
    else:
        lst = [int(word) for word in words]
    return sum(sorted(lst))