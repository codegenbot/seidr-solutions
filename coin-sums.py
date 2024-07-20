def coin_sums(cents):
    def recurse(coins, results, target, used):
        if target < 0:
            return False
        if target == 0:
            return True

        for i in range(len(coins) - 1, -1, -1):
            if used[i] or (target < coins[i]):
                continue

            used[:] = [True] * len(used)
            used[i] = False
            if recurse(coins, results, target - coins[i], used):
                results[i] += 1
                return True
            used[i] = True

        return False

    results = [0, 0, 0, 0]
    used = [False, False, False, False]

    if not recurse([25, 10, 5, 1], results, cents, used):
        return None

    return tuple(results)