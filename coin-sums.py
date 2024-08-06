def coin_sums(cents):
    coins = [25, 10, 5, 1]
    output = []
    for coin in coins:
        output.append(int(cents // coin))
        cents %= coin
    return output


c = int(input())
print(*coin_sums(c), sep="\n")