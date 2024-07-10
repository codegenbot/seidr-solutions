```Python
def fruit_distribution(s,n):
    quantities = s.split()
    apples = int(quantities[0].replace("apples ",""))
    for i in range(len(quantities)-1, 0, -1):
        if "oranges" in quantities[i]:
            oranges = int(quantities[i-1].split(' ')[0])
            break
    return n - (apples + oranges)