def fruit_distribution():
    fruits = input("Enter the list of fruits: ")
    amount = int(input("Enter the amount: "))
    fruit_dict = {}
    for fruit in fruits.split(","):
        if fruit.strip():
            fruit_dict[fruit.strip()] = fruit_dict.get(fruit.strip(), 0) + 1
    return {k: v / amount * 100 for k, v in fruit_dict.items()}


print(fruit_distribution())