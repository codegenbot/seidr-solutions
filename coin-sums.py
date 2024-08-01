def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(10000):  # Initialize a queue with a large number of iterations
        q = [
            (cents, 0, 0, 0, 0)
        ]  # Initialize the queue with the input cents and zero coins
        while q:
            cents_left, pennies, nickles, dimes, quarters = q.pop(0)
            if cents_left < 0:
                continue
            if cents_left == 0:
                results.append((pennies, nickles, dimes, quarters))
                continue
            for coin in coins:
                if cents_left >= coin:
                    q.append(
                        (
                            cents_left - coin,
                            pennies + cents_left // coin // 100,
                            nickles + cents_left // coin // 10,
                            dimes + cents_left // coin,
                            quarters + cents_left // coin // 25,
                        )
                    )
        return min(results) if results else [0, 0, 0, 0]


cents = int(input())
print(*coin_sums(cents))