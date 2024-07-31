```
x = input("Enter first fraction: ")
n = input("Enter second fraction: ")

def simplify(x, n):
    x_num, x_denom = map(int, [0]+list(map(int, x.split("/"))))
    n_num, n_denom = map(int, [0]+list(map(int, n.split("/"))))

    if (x_num*x_denom) % math.gcd(x_denom, n_denom) == 0 and (n_num*n_denom) % math.gcd(n_denom, x_denom) == 0:
        return True
    else:
        return False

print(simplify(x, n))