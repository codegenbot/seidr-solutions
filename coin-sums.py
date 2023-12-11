def get_coin_combination(cents):
    coins = [1, 5, 10, 25]
    combination = []
    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        combination.append(count)
    return combination

def main():
    while True:
        try:
            cents = int(input("Enter a number of cents: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    combination = get_coin_combination(cents)
    print("The fewest number of US coins needed to make", cents, "cents is:")
    for i in range(len(combination)):
        print("Number of", ["penny", "nickle", "dime", "quarter"][i], ":", combination[i])

if __name__ == "__main__":
    main()