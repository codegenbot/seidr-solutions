```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i] 
        cents %= coins[i] 
        result[i] = count

    return result

if __name__ == "__main__":
    amount = int(input("Enter the amount in cents: "))
    coin_counts = coin_sums(amount)
    print("Number of quarters:", coin_counts[0])
    print("Number of dimes:", coin_counts[1])
    print("Number of nickels:", coin_counts[2])
    print("Number of pennies:", coin_counts[3])