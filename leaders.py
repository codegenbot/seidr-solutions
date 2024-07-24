def leaders(integers):
    return [
        integer
        for i, integer in enumerate(reversed(integers))
        if all(integer >= x for x in integers[i + 1 :])
    ]