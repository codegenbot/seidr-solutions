def coin_sums():
    n = int(input())
    coins = [25, 10, 5, 1]
    output = [0, 0, 0, 0]

    for i in range(4):
        while n >= coins[i]:
            output[i] += 1
            n -= coins[i]

    return output


print(*coin_sums())