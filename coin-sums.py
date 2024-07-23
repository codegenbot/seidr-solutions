```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    while True:
        quarter_count = min([cents // i for i in coins])
        for i in coins[::-1]:
            if cents >= i:
                count = min(quarter_count, cents // i)
                cents -= count * i
                results[coins.index(i)] += count
            else:
                break

    def print_results(results):
        for i, count in enumerate(reversed(results)):
            if i == 0:  
                print(f"Quarters: {count}")
            elif i == 1:  
                print(f"Dimes: {count * 2}")
            elif i == 2:  
                print(f"Nickels: {count * 5}")
            else:
                print(f"Pennies: {count}")

    print_results(results)

coin_sums(4281)