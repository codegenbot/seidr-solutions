```Python
def digitSum(n=""):
    if isinstance(n, str):
        n = "".join(filter(str.isdigit, n.replace(" ", "").lower()))
        return sum(int(c) for c in n)
    elif not n:  
        n = int(input("Enter a number: "))
        return sum(int(c) for c in str(abs(n)) if c.isdigit())