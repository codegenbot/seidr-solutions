def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return counts

def main():
    cents = int(input("Enter the number of cents: "))
    counts = get_coin_sums(cents)
    print("The fewest number of US coins needed to make", cents, "is:")
    for i in range(len(counts)):
        print(counts[i], "coins of value", coins[i])

if __name__ == "__main__":
    main()