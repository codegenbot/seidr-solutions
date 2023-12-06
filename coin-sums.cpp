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
(document.getElementById("coin-sums")).innerHTML = get_min_coins(1) + " coins";
(document.getElementById("coin-sums")).innerHTML = get_min_coins(5) + " coins";
(document.getElementById("coin-sums")).innerHTML = get_min_coins(10) + " coins";
(document.getElementById("coin-sums")).innerHTML = get_min_coins(25) + " coins";
(document.getElementById("coin-sums")).innerHTML = get_min_coins(15) + " coins";
(document.getElementById("coin-sums")).innerHTML = get_min_coins(30) + " coins";
(document.getElementById("coin-sums")).innerHTML = get_min_coins(45) + " coins";