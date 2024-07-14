def probability(P, C):
    return (P - 1) / (P * C - 1) if P > C else (C - 1) / (P * C - 1)