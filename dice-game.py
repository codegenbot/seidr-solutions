```
def roll_dice(n, m):
    p_total = sum(1 for _ in range(1, n + 1))
    c_total = sum(1 for _ in range(1, m + 1))

    p_prob = sum((i + 1) / (n * p_total) for i in range(m)) 
    c_prob = sum((j + 1) / (m * c_total) for j in range(n)) 

    return abs(p_prob - c_prob)