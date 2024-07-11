def sort_even(l: list):
    return [sorted([x for x in l if i // 2 * 2 == i]).pop() if i % 2 == 0 else x
            for i, x in enumerate(l)]