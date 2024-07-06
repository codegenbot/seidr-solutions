def fruit_distribution():
    fruits = input(
        "Enter the list of fruits (comma-separated), type 'stop' when done: "
    )
    fruit_dict = {}
    while True:
        for fruit in fruits.split(","):
            if fruit.strip() == "stop":
                break
            if fruit.strip():
                fruit_dict[fruit.strip()] = fruit_dict.get(fruit.strip(), 0) + 1
        if fruit.strip() == "stop":
            break
        for fruit in fruits.split(","):
            if fruit.strip() == "stop":
                break
            if fruit.strip():
                weight = input(f"Enter the weight of {fruit.strip()}: ")
                try:
                    fruit_weights = {}
                    for fruit in fruits.split(","):
                        if fruit.strip() == "stop":
                            break
                        if fruit.strip():
                            fruit_weights[fruit.strip()] = int(
                                input(f"Enter the weight of {fruit.strip()}: ")
                            )
                    return {
                        k: v / sum(fruit_weights.values()) * 100
                        for k, v in fruit_dict.items()
                    }
                except ValueError:
                    print("Invalid weight. Please enter a number.")