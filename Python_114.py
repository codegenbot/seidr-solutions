def minSubArraySum(s):
    min_sum = float('inf')
    for i in range(len(s)):
        current_sum = 0
        for j in range(i, len(s)):
            current_sum += s[j]
            if current_sum < min_sum:
                min_sum = current_sum
                
    return min_sum