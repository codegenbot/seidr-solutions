def digits(n):
    return (
        eval("*".join(str(int(d)) for d in str(n) if int(d) % 2 != 0))
        if any(int(d) % 2 != 0 for d in str(n))
        else 0
    )