def total_match(lst1, lst2):
    return (
        min([lst1, lst2], key=lambda x: sum(len(i) for i in x))
        if len(set(x.lower() for x in lst1 + lst2)) == 1
        else [min([lst1, lst2], key=lambda x: sum(len(i) for i in x))]
    )