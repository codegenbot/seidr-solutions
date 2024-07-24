def fruit_distribution(s, n):
    apple_quantity = s.lower().split("apples")[1].split()[0]
    orange_quantity = s.lower().split("oranges")[1].split()[0]
    
    max_per_box = min(int(apple_quantity) + int(orange_quantity), n)
    remaining_fruits = int(apple_quantity) + int(orange_quantity) - (max_per_box * (n + 1))

    return (
        int(-(-int(apple_quantity) + int(orange_quantity) / float(max_per_box)) + 0.5)
        if max_per_box != 0
        else int(apple_quantity) + int(orange_quantity)
    )