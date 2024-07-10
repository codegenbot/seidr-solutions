def fruit_distribution(s, n):
    s = s.lower()
    fruits = s.split("and")
    for i in range(len(fruits)):
        if "," in fruits[i]:
            quantities, _ = fruits[i].split(",")
            quantities = quantities.strip()  
            fruits[i] = int(quantities)  
    return sum(fruits[:n]) / n