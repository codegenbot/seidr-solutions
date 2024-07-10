def minSubArraySum(s):
    min_sum = float('inf')
    left = 0
    current_sum = 0
    for right in range(len(s)):
        if s[right] == '1':
            current_sum += 1
        else:
            current_sum = 0
        while current_sum > 0 and left <= right:
            min_sum = min(min_sum, right - left + 1)
            if s[left] == '1':
                current_sum -= 1
            else:
                current_sum = 0
            left += 1
    return min_sum if min_sum != float('inf') else 0