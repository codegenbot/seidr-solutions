def sort_even(l: list):
    even_list = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    return [
        even_list[i // 2] if i % 2 != 0 else even_list[i // 2] for i in range(len(l))
    ]