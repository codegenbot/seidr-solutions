```
def sort_third(l: list):
    sorted_zeroes = [x for x in l if x % 3 == 0]
    sorted_zeroes.sort()
    return [
        val if i % 3 != 0 else sorted_zeroes.pop(0)
        for i, val in enumerate(l)
    ]