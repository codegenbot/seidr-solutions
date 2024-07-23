```
return [
    x if i % 2 != 0 else sorted((l[i], l[(i + 1) % len(l)]))[0]
    for i, x in enumerate(l)
]