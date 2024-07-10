def sort_even(l: list):
    even = sorted([x for x in l if l.index(x) % 2 == 0])
    odd = [x for x in l if l.index(x) % 2 != 0]
    return [even[i % len(even)] if i % 2 == 0 else odd[i // 2] for i in range(len(l))]