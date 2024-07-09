def coin_sums(cents):
    coins = [25, 10, 5, 1]
    answer = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            answer[i] += 1

    return answer


cents = int(input())
print(*coin_sums(cents))