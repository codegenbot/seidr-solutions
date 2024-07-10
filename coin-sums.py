def coin_sums(cents):
    coins = [25, 10, 5, 1]
    answer = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            answer[i] += 1

    return answer[0], answer[1], answer[2], answer[3]


cents = int(input())
penny, nickel, dime, quarter = coin_sums(cents)
print(quarter)
print(dime)
print(nickel)
print(penny)