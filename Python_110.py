def exchange(lst1, lst2):
    odd_count = sum(1 for x in lst1 if x % 2 != 0)
    return (
        "YES"
        if all(x % 2 == 0 for x in lst2)
        and odd_count <= len([x for x in lst2 if x % 2 != 0])
        else "NO"
    )