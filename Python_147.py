def get_max_triples(n):
    max_sum = 0
    for i in range(1, n+1):
        triple_sum = i + (i+1) + (i+2)
        if triple_sum > max_sum:
            max_sum = triple_sum
    return max_sum