def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        while cents >= coin:
            cents -= coin
            result.append(coin)

    pennies = cents // 1
    nickles = (cents % 100) // 50
    dimes = ((cents % 100) % 50) // 10
    quarters = ((cents % 100) % 50) % 10

    print(len(result))
    print(pennies)
    print(nickles)
    print(dimes)
    print(quarters)


coin_sums()