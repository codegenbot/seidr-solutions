def digitSum(n=""):
    if isinstance(n, str):
        n = int("".join(filter(str.isdigit, n.replace(" ", "").lower())))
    elif not n:  
        n = int(input("Enter a number: "))
    return sum(int(c) for c in str(abs(n)) if c.isdigit())