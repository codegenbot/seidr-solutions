def fruit_distribution():
    fruit_dict = {}
    for _ in range(int(input("Enter the number of fruits: "))):
        fruit = input("Enter a fruit (or 'stop' to finish): ")
        if fruit.lower() != "stop":
            fruit_dict[fruit] = fruit_dict.get(fruit, 0) + 1
    fruit_weights = {}
    for fruit, _ in fruit_dict.items():
        while True:
            weight = input(f"Enter the weight of {fruit}: ")
            try:
                fruit_weights[fruit] = int(weight)
                break
            except ValueError:
                print("Invalid weight. Please enter a number.")
    return {k: v / sum(fruit_weights.values()) * 100 for k, v in fruit_dict.items()}


print(fruit_distribution())