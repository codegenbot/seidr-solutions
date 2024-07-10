def fruit_distribution(s,n):
    quantities = s.split()
    apples = int(quantities[0].replace("apples ",""))
    oranges = 0
    for q in quantities:
        if "oranges" in q:
            oranges = int(q.replace("oranges ",""))
            break
    return n - (apples + oranges)