
<<REPL>>
<<SOL>>
COINS = (1, 2, 5, 10)
N_COINS = len(COINS)
MAX_VALUE = sum([coin*10 for coin in COINS]) + 1
memoization = [[[None]*N_COINS] * MAX_VALUE ]
def getChange(n):
    if n<0:
        return MAX_VALUE
    elif n == 0:
        return (0, 0, 0 , 0)
    else:
        res = memoization[n][:]
        coinIndex = N_COINS -1
        while n >= 0 and coinIndex >= 0:
            if res[coinIndex] is None:
                res[coinIndex] = getChange(n-COINS[coinIndex])
            n -= COINS[coinIndex]
            coinIndex -= 1
    return tuple(res)
def main():
    T = int(input())
    while T:
        n = int(input())
        result = getChange(n-1)
        print(" ".join(map(str, result)))
        T -= 1
if __name__ == '__main__':
    main()
<<EOF>>
