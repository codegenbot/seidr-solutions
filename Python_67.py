```
def solve(s, n):
    if n <= 0 or not any(c in "oa" for c in s if c != " "):
        print("Program did not receive expected input")
    else:
        digits = [int(d) for d in "".join(filter(str.isdigit, s))]
        n -= sum(digits) + sum(int(d) for d in set([c for c in s if c != " " and c not in "oa"]))
    return n