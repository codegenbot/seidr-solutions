def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    s = s.replace("and", " ")
    n = int(n)
    return n - int(s.split()[0].split()[1:]) - int(s.split()[2].split()[-1])