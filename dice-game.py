
# This function calculates the probability of Peter rolling strictly higher than Colin given that they both roll their dice at the same time. The formula is (n-1)/(m*n) where n is the number of sides on Peter's die and m is the number of sides on Colin's die.
def get_probability(n, m):
    return (n - 1) / (m * n)