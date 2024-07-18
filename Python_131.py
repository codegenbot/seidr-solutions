def digits(n):
    return (
        0
        if all(int(d) % 2 == 0 for d in str(n))
        else eval("*".join(d for d in str(n) if int(d) % 2 != 0))
    )