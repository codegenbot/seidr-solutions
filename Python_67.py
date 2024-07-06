def fruit_distribution():
    fruits = input("Enter the list of fruits (comma-separated): ")
    amount = input("Enter the total weight: ")
    
    try:
        amount = int(amount)
    except ValueError:
        print("Invalid input! Please enter a valid number.")
        return {}
        
    fruit_dict = {}
    for fruit in fruits.split(","):
        if fruit.strip():
            fruit_dict[fruit.strip()] = fruit_dict.get(fruit.strip(), 0) + 1
    return {k: v / amount * 100 for k, v in fruit_dict.items()}


print(fruit_distribution())