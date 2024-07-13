def sort_third(l: list):
    return [
        l[i] if i % 3 != 0 else next((y for y, x in enumerate(l) if (i - y) % 3 != 0), None)[0]
        for i in range(len(l))
    ]