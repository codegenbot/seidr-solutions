```python
def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    for i in range(len(denominations)):
        count = cents // denominations[i]
        if count > 0:
            coins[i] = count
            print(f"{count} quarter{'s' if count > 1 else ''}")
            cents -= denominations[i] * count

    print("Pennies:", coins[3])
    print("Nickels:", coins[2])
    print("Dimes:", coins[1])
    print("Quarters:", coins[0])