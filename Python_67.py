def fruit_distribution():
    fruits = input('Enter the list of fruits: ')
    amount = int(input('Enter the amount: '))
    
    if not fruits.strip() or not str(amount):
        return "Please enter valid inputs."
        
    fruit_dict = {}
    for fruit in fruits.split(','):
        if fruit.strip() not in fruit_dict:
            fruit_dict[fruit.strip()] = 0
        fruit_dict[fruit.strip()] += 1
    return {k: v / amount * 100 for k, v in fruit_dict.items()}

print(fruit_distribution())