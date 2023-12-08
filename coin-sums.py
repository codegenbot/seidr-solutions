[PYTHON]
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
    print("The fewest number of US coins needed to make that amount is:")
    for i in range(len(counts)):
        if counts[i] > 0:
            print(f"{counts[i]} {coins[i]} cent coin(s)")

if __name__ == "__main__":
    main()
[/PYTHON]

```