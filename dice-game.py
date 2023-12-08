def get_probability(n, m):
    # Calculate the probability that Colin rolls strictly higher than Peter
    prob_colin = 1 / (m * (m + 1))
    
    # Calculate the probability that they roll the same number
    prob_same = (1 / (m * (m + 1))) * n
    
    # Calculate the total probability that Peter rolls strictly higher than Colin
    total_prob = prob_colin * n + prob_same
    
    return total_prob