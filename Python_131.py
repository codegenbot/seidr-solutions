import ast

def digits(n):
    return ast.literal_eval("*".join(str(int(d)) for d in str(n) if int(d) % 2 != 0))