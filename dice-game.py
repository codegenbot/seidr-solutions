# This function calculates the probability of Peter rolling strictly higher than Colin
def get_probability(n, m):
    # Calculate the probability that Peter rolls a 1
    prob_peter_rolls_one = 1 / n

    # Calculate the number of possible outcomes for Colin
    num_outcomes_colin = m

    # Calculate the probability of Peter rolling strictly higher than Colin
    prob_peter_higher = prob_peter_rolls_one * num_outcomes_colin

    return prob_peter_higher