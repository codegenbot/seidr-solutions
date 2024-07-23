def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            result.append(
                str(count) + " quarters"
                if coin == 25
                else (
                    str(count) + " nickles"
                    if coin == 10
                    else str(count) + " dimes" if coin == 5 else str(count) + " pennies"
                )
            )
            cents %= coin
        else:
            result.append("0 coins")
    return "\n".join(result) + "\n" + str(cents)