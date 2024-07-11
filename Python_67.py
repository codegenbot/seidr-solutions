def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    s = s.replace("and", " ")
    s = s.replace(" ", "")
    return n - int(s.split()[0].split(" ")[-1]) - int(s.split()[-1])