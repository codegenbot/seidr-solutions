def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = []

    for coin in coins:
        count = cents // coin
        cents %= coin
        coin_counts.append(count)

    return f"{coin_counts[0]} quarter(s), {coin_counts[2]} nickel(s), {coin_counts[1]} dime(s), {coin_counts[3]} penny(ies)"


cents = int(input())
print(coin_sums(cents))