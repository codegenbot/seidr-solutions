def get_max_triples(n):
    # Initialize variables for the two pointers
    left = 0
    right = n - 1
    count = 0

    while left < right:
        # Check if the current element and its neighbors form a triple
        if arr[left] + arr[right] + arr[right + 1] % 3 == 0:
            count += 1
            left += 1
            right -= 1

    return count