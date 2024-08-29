def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for i in range(10000):  # maximum number of each type of coin
        total = 0
        count = [0, 0, 0, 0]

        for j in range(i + 1):
            if total + coins[3] <= cents:
                total += coins[3]
                count[3] += 1
            elif total + coins[2] <= cents:
                total += coins[2]
                count[2] += 1
            elif total + coins[1] <= cents:
                total += coins[1]
                count[1] += 1
            else:
                total += coins[0]
                count[0] += 1

        if total == cents:
            results.append(count)

    return results[-1][3], results[-1][2], results[-1][1], results[-1][0]


cents = int(input())
print(*coin_sums(cents))