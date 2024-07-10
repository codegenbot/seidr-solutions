```
def digitSum(n=""):
    if isinstance(n, str):
        n = int("".join(c for c in n.replace(" ", "").lower() if c.isdigit()))
    elif not n:  
        n = int(input("Enter a number: "))
    return sum(int(c) for c in str(abs(n)) if c.isdigit())