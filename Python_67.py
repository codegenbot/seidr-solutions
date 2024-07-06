
def fruit_distribution(s, n):
    # Parse input string to extract number of apples and oranges
    apple_count, orange_count = map(int, s.split())
    return n - apple_count - orange_count