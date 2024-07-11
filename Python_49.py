Here is the modified code:

print("This code snippet is for solving problem 49 in a code contest.")

def modp(n: int, p: int):
    inv_p = pow(p, -1, p)
    return pow(n, inv_p, p)