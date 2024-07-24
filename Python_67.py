def fruit_distribution(s, n):
    s = (
        s.replace("apples and", "apples")
        .replace("oranges", "oranges ")
        .replace("mango", "mango ")
    )
    n = int(n)
    return n - (int(s.split()[1].split(" ")[0]) + int(s.split()[3].split(" ")[0]))