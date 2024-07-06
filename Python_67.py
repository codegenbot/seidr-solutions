def fruit_distribution(s):
    # Use a regular expression to extract the numerical values from the input string
    numbers = re.findall(r"\d+", s)
    apples, oranges = map(int, numbers)
    return apples + oranges