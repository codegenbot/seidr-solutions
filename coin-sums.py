```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = ["quarters", "dimes", "nickles", "pennies"]
    result_value = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            quotient = int(cents / coins[i])
            result_value[i] += quotient
            cents -= coins[i] * quotient

    return dict(zip(result, result_value))