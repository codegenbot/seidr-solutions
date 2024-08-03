def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_per_coin = [4, 2, 1, 1]
    results = []

    for i in range(0, cents + 1):
        for combination in itertools.product(range(6), repeat=len(coins)):
            coin_total = sum([a * b for a, b in zip(coins, combination)])
            if coin_total == i:
                results.append(list(combination))

    quarter_count = 0
    nickel_count = 0
    dime_count = 0
    penny_count = cents

    for r in results:
        q_count = r[0]
        n_count = (r[1] * 2) + r[2]
        d_count = (r[3] * 4) + (r[2] // 2)
        p_count = r[3] % 4
        if q_count > quarter_count:
            quarter_count = q_count
            nickel_count = n_count
            dime_count = d_count
            penny_count = p_count
        elif q_count == quarter_count and (n_count, d_count, p_count) < (
            nickel_count,
            dime_count,
            penny_count,
        ):
            nickel_count = n_count
            dime_count = d_count
            penny_count = p_count

    return [
        penny_count // 1,
        penny_count % 1 * pennies_per_coin[3] // 1,
        (dime_count + penny_count % 1 * pennies_per_coin[3]) // 10,
        (nickel_count + dime_count % 10 * pennies_per_coin[2]) // 5,
        quarter_count,
    ]


cents = int(input())
print(*coin_sums(cents))