[PYTHON]
def get_min_coins(cents):
    coins = [1, 5, 10, 25]
    min_coins = 0
    for coin in coins:
        while cents >= coin:
            cents -= coin
            min_coins += 1
    return min_coins
[/PYTHON]
(function get_min_coins(cents) {
    const coins = [1, 5, 10, 25];
    let min_coins = 0;
    for (const coin of coins) {
        while (cents >= coin) {
            cents -= coin;
            min_coins += 1;
        }
    }
    return min_coins;
})