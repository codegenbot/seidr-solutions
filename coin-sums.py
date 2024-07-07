def coin_sums(cents):
    coins = [25, 10, 5, 1]
    answer = {'quarters': 0, 'dimes': 0, 'nickles': 0, 'pennies': 0}
    
    for coin in coins:
        count = cents // coin
        answer[f'{coin/100}'] = count
        cents -= count * coin
        
    return [answer['quarters'], answer['dimes'], answer['nickles'], answer['pennies']]