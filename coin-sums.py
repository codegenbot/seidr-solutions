# Write a function that takes an integer `cents` as input and returns the minimum number of US coins needed to make that amount
def get_coin_sums(cents):
    # Initialize a list to store the counts of each coin type
    counts = [0, 0, 0, 0]

    # Iterate through the possible coin values in descending order
    for i in range(3, -1, -1):
        # While the number of cents is greater than or equal to the current coin value
        while cents >= coins[i]:
            # Add one of the current coin type to the counts
            counts[i] += 1
            # Subtract the current coin value from the number of cents
            cents -= coins[i]

    return counts

# Test your code with the following input values
print(get_coin_sums(1))  # should return [0, 0, 0, 1]
print(get_coin_sums(5))  # should return [0, 0, 1, 0]
print(get_coin_sums(10))  # should return [0, 1, 0, 0]
print(get_coin_sums(25))  # should return [1, 0, 0, 0]