```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(4 + cents // max(coins)):
        total = 0
        count = [0, 0, 0, 0]
        for j in range(i, -1, -1):
            while total < cents and j > 0:
                if j >= len(coins) or coins[j] > cents - total:
                    break
                total += coins[j]
                count[j] += 1
                j -= 1
            if total == cents:
                results.append(count[:])
                break
        if total == cents:
            break
    return len(results[0]), len(results[0]) // 25, (len(results[0]) // 10) % 3, len(results[0]) % 5