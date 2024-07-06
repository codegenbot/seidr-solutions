```
return [
    (
        x
        if x % 3 != 0
        else sorted([i for i in l if i % 3 == 0])[-1]
    )
    for x in sorted([i for i in l if i % 3 != 0], key=lambda x: (x, 2*x))
]