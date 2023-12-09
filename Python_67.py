import ast

def fruit_distribution(s):
    # Get the number of apples and oranges from the input string
    apple_count, orange_count = map(ast.literal_eval, s.split("apples"))

    # Calculate the number of mango fruits by subtracting the sum of apples and oranges from the total fruit count
    mango_count = 100 - (apple_count + orange_count)

    return mango_count