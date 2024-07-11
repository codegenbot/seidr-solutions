def modp(n: int, p: int):
    return (
        pow(n, p - 2, p) * n % p
        if (n := n.bit_length(), p := pow(10, p.bit_length()))[1] % 2 == 0
        else pow(n, p, p)
    )