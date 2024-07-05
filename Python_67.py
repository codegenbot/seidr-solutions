
def fruit_distribution(s, n):
    try:
        apple_count = int(re.search(r"(\d+) apples", s)[1])
        orange_count = int(re.search(r"(\d+) oranges", s)[1])
        return n - apple_count - orange_count
    except IndexError:
        return "Invalid input: No fruits found."