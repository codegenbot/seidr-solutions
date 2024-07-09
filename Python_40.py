def triples_sum_to_zero(l: list):
    for i in range(len(l)):
        for j in range(i + 1, len(l)):
            if l[i] + l[j] in l:
                return True
    return False