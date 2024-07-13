```
def fruit_distribution(s, n):
    s = s.replace(" apples", " 0 apples").replace(" oranges", " 0 oranges")
    return (
        sum(int(i) for i in s.split() if i.isdigit()) - (s.count("apples") + s.count("oranges")) + n
    )