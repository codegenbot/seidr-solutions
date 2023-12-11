def coin_sums(cents):
    coins = {
        'pennies': cents // 1,
        'nickles': cents // 5,
        'dimes': cents // 10,
        'quarters': cents // 25
    }
    return (coins['pennies'], coins['nickles'], coins['dimes'], coins['quarters'])