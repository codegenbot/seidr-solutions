def exchange(lst1, lst2):
    return (
        "YES"
        if all(i % 2 == 0 for i in (j if j % 2 != 0 else k for j, k in zip(lst1, lst2)))
        else "NO"
    )