return [
    x if i % 3 != 0 else (x if i % 3 == 1 else next((y for y in l3[::-1] if y > x)))
    for i, x in enumerate(sorted(l1 + [next((y for y in l2), None)] + sorted_l3))
]