def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)

    dp = [float('inf')] * (n+1)
    dp[0] = 0
    
    for i in range(n+1):
        left_sum = 0
        for j in range(i):
            left_sum += vector[j]
        right_sum = total_sum - left_sum
        
        if abs(left_sum - right_sum) < dp[i]:
            dp[i] = abs(left_sum - right_sum)

    min_index = 0
    min_diff = dp[0]

    for i in range(1, n+1):
        if dp[i] < min_diff:
            min_diff = dp[i]
            min_index = i

    return vector[:min_index], vector[min_index:], min_diff