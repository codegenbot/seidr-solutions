def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            results.append(
                f"{count} quarter{'s' * (count > 1)}"
                if coin == 25
                else (
                    f"{count} nickel{'s' * (count > 1)}"
                    if coin == 10
                    else (
                        f"{count} dime{'s' * (count > 1)}"
                        if coin == 5
                        else f"{count} penny{'s' * (count > 1)}"
                    )
                )
            )
            cents %= coin

    return "\n".join(results)