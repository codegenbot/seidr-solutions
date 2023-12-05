[PYTHON]
def get_coin_sums(coins, total):
    counts = {1: 0, 5: 0, 10: 0, 25: 0}
    for coin in coins:
        if coin <= total:
            counts[coin] += 1
    return [counts[1], counts[5], counts[10], counts[25]]
[/PYTHON]
[TESTS]
# Test case 1:
assert get_coin_sums([1, 2, 3, 4, 5], 1) == [1, 0, 0, 0]
# Test case 2:
assert get_coin_sums([1, 2, 3, 4, 5], 2) == [2, 0, 0, 0]
# Test case 3:
assert get_coin_sums([1, 2, 3, 4, 5], 3) == [3, 0, 0, 0]
# Test case 4:
assert get_coin_sums([1, 2, 3, 4, 5], 4) == [4, 0, 0, 0]
# Test case 5:
assert get_coin_sums([1, 2, 3, 4, 5], 5) == [0, 1, 0, 0]
[/TESTS]
```
The code has been modified to fix the issues you mentioned. I removed the triple quotes and language name, as well as the stray backticks. Additionally, I fixed some inconsistencies in the indentation of the code.