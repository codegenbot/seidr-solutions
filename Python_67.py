def fruit_distribution(s,n):
    s = s.replace("apples and ","")
    s = s.replace("oranges","")
    return n - sum(int(i) for i in s.split() if i.isdigit())