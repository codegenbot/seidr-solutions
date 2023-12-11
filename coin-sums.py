import math
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    count = [0] * len(coins)
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            count[i] += 1
    return count

def main():
    print("Please enter the number of cents: ")
    cents = int(input())
    count = coin_sums(cents)
    print("The fewest number of US coins needed to make that amount is:")
    for i in range(len(count)):
        if count[i] != 0:
            print(f"{count[i]} {coins[i]} cent coin(s)")
        else:
            print("No coins needed")

if __name__ == "__main__":
    main()