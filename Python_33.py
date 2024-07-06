```
def sort_third(l: list):
    sorted_elements = [x for i, x in enumerate(l) if i % 3 == 0]
    sorted_elements.sort()
    return [
        x if i % 3 != 0 else y
        for i, x in enumerate(l)
        for j, y in enumerate(sorted_elements, start=0)
        if i % 3 == j % 3
    ]