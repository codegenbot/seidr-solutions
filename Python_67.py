def fruit_distribution(s, n):
    s = s.replace("apples and", " ").replace("oranges and", " ")
    total = int(s.split()[0].replace("apples", "").replace("oranges", "")) + n
    if s.split()[-1]:
        return str(total - int(s.split()[-1].replace("apples", "").replace("oranges", "")))
    else:
        return str(total)