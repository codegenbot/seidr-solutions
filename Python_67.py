def fruit_distribution(s,n):
    s = s.replace("apples and ","")
    s = s.replace("oranges","")
    return n - int(s.replace(" apples", "").replace(" oranges", ""))