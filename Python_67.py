
def fruit_distribution(s, n):
    # Split the input string into two parts: apples and oranges
    apples, oranges = s.split("and")
    
    # Convert the number of apples and oranges to integers
    num_apples = int(apples[:-1])
    num_oranges = int(oranges[:-1])
    
    # Calculate the total number of fruits in the basket
    total_fruits = num_apples + num_oranges
    
    # Calculate the number of mango fruits in the basket
    num_mangoes = n - total_fruits
    
    return num_mangoes