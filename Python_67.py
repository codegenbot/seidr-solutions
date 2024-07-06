def fruit_distribution():
    fruits = input("Enter the list of fruits (comma-separated): ")
    fruit_dict = {}
    for fruit in fruits.split(","):
        if fruit.strip():
            fruit_dict[fruit.strip()] = fruit_dict.get(fruit.strip(), 0) + 1
    fruit_weights = {}
    for fruit in fruits.split(","):
        if fruit.strip():
            weight = input(f"Enter the weight of {fruit.strip()}: ")
            try:
                fruit_weights[fruit.strip()] = int(weight)
            except ValueError:
                print("Invalid weight. Please enter a number.")
    return {k: v / sum(fruit_weights.values()) * 100 for k, v in fruit_dict.items()}


print(fruit_distribution())