```
def sort_third(l):
    return [
        (
            min(x for x in l[i // 3 * 3:(i // 3 + 1) * 3] if x % 3 != 0)
            if i % 3 == 0
            else i
        )
        for i in range(len(l))
    ]