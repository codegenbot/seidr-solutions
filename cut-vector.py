def cut_vector(vector):
    n = len(vector)
    dp = [float("inf")] * (n + 1)
    
    for i in range(n+1):
        left_sum = sum(vector[:i])
        
        if i == 0:
            right_sum = 0
        else:
            right_sum = sum(vector[i:])
        
        dp[i] = abs(left_sum - right_sum)
        
    min_diff_index = dp.index(min(dp))
    
    return vector[:min_diff_index], vector[min_diff_index:]