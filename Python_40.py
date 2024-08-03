def triples_sum_to_zero(l: list):
    l = set(l)
    for i in l:
        for j in l:
            if i + j in l and i != j and j != i:
                return True
    return False