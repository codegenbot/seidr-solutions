    def modp(n: int, p: int):
        if n+1 != 0:
            return pow(n, p-2)*(n+1)%p
        else:
            return 1