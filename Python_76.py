def is_simple_power():
    x = float(input("Enter a number: "))
    n = int(input("Enter another number: "))
    return math.isclose(x, n ** (math.sqrt(n)), rel_tol=1e-9)