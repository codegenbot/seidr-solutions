def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    answers = []
    for coin in coins:
        ans = cents // coin
        if ans > 0:
            answers.append(ans)
            cents %= coin
    print(*answers, sep="\n")


coin_sums()