
# Write a function that returns the total number of fruits based on the given input string
def fruit_distribution(s):
    # Use regular expressions to extract the numbers from the input string
    apples = int(re.search(r"\d+", s).group())
    oranges = int(re.search(r"\d+", s).group())
    
    # Return the sum of the two numbers
    return apples + oranges