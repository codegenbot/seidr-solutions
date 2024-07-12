def triples_sum_to_zero(l: list):
    l = set(l)
    for a in l:
        for b in l:
            if a + b == -l:
                return True
    return False