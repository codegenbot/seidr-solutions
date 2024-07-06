def fruit_distribution(fruit_list, amount):
    fruits = [x.strip() for x in fruit_list.split(',')]
    distribution = {}

    for fruit in set(fruits):
        if fruit not in distribution:
            distribution[fruit] = 0
        distribution[fruit] += int(amount) // len(fruits)

    remaining_amount = int(amount) % len(fruits)
    fruits_list = [x.strip() for x in fruit_list.split(',')]
    indices = list(range(len(fruits_list)))
    for i in range(remaining_amount):
        distribution[fruits_list[i]] += 1

    return distribution


fruit_list = input("Enter the list of fruits: ")
amount = int(input("Enter the amount: "))
print(fruit_distribution(fruit_list, amount))