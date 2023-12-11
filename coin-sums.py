def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1

    return counts

def main():
    print("Enter the number of cents: ")
    cents = int(input())
    counts = get_coin_sums(cents)
    print("Pennies: ", counts[0])
    print("Nickles: ", counts[1])
    print("Dimes: ", counts[2])
    print("Quarters: ", counts[3])

if __name__ == "__main__":
    main()