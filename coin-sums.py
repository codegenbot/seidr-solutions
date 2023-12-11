def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for coin in coins:
        while cents >= coin:
            counts[coins.index(coin)] += 1
            cents -= coin
    return counts

def main():
    cents = int(input("Enter a number of cents: "))
    counts = get_coin_sums(cents)
    print("Pennies:", counts[0])
    print("Nickles:", counts[1])
    print("Dimes:", counts[2])
    print("Quarters:", counts[3])

if __name__ == "__main__":
    main()