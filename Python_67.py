```
def solve(s, n):
    if not any(c in "oa" for c in s if c != " "):
        print("Program did not receive expected input")
    else:
        digits = [int(d) for d in "".join(filter(str.isdigit, s))]
        non_o_a_chars = [c for c in s if c != " " and c not in "oa"]
        n -= sum(digits) + len(set(non_o_a_chars))
    return n