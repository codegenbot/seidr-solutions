
def fruit_distribution(s):
    # Use a regular expression to extract the numbers from the input string
    match = re.search(r'\d+', s)
    if match:
        apples, oranges = map(int, match.groups())
        return apples + oranges
    else:
        return 0