```
def fruit_distribution(s,n):
    quantities = s.split()
    apples = int(quantities[0].replace("apples ",""))
    oranges = int(' '.join(quantities[-1].split()[1:]).replace("oranges ",""))
    return n - (apples + oranges)