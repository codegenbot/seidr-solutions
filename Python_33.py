return [
    val if i % 3 != 0 else sorted((l[i] for l in ((x for x in l if i % 3 == 0))))[0]
    for i, val in enumerate(l)
]