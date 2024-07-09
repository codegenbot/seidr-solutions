def fruit_distribution(s, n):
    s = (
        s.replace("apples", "0")
        .replace("oranges", "0")
        .replace("and", "")
        .replace("mango", "0")
    )
    return n - int(s.split()[0].split(" ")[0]) - int(s.split()[-1].split(" ")[0])