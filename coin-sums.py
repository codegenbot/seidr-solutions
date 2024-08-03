def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return result


def main():
    num_cents = int(input("Enter the number of cents: "))
    print(*coin_sums(num_cents))


if __name__ == "__main__":
    main()