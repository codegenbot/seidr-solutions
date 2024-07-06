```
def fruit_distribution(fruit_list, amount):
    fruit_dict = {}
    for fruit in fruit_list.split():
        if fruit not in fruit_dict:
            fruit_dict[fruit] = 0
        fruit_dict[fruit] += 1
    return {k: v * (amount // len(fruit_dict)) + min(v, amount % len(fruit_dict)) for k, v in fruit_dict.items()}

fruit_list = input()
amount = int(input())
print(fruit_distribution(fruit_list, amount))
print(fruit_distribution(input(), int(input())))