def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    answer = [0, 0, 0, 0]

    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            answer[i] += 1

    return " ".join(map(str, answer))