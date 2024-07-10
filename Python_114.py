```
def minSubArraySum(s):
    if not s:
        return 0
    min_sum = float('inf')
    left = 0
    current_sum = 0
    for right in range(len(s)):
        current_sum += ord(s[right]) - ord('a') + 1
        while current_sum > 26 and left <= right:
            min_sum = min(min_sum, current_sum)
            current_sum -= ord(s[left]) - ord('a') + 1
            left += 1
    return min_sum if min_sum != float('inf') else 0